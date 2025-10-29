#include "core/check.h"
#include <furi.h>
#include <furi_hal.h>
//#include <flipper.h>

#include <stdio.h>
#include <drivers/log.hpp>
#include "FreeRTOS.h"
#include "task.h"
#include "pico/multicore.h"


#include <furi_hal_resources.h>
#include <furi_hal_gpio.h>

//#include <platform_startup.h>

#define TAG "Main"

// int32_t init_task(void* context) {
//     UNUSED(context);

//     // Flipper FURI HAL
//     furi_hal_init();

//     // Set the UART for logging output
//     furi_hal_serial_control_set_logging_config(FuriHalSerialIdUsart6, 230400);

//     // Init flipper
//     flipper_init();

//     furi_background();

//     return 0;
// }

static void key1_callback(void* ctx) {
    printf("Key1 pressed!");
}

static void task_main(void* arg) {
   Log::info("Starting main task...");
    furi_hal_gpio_init_simple(&gpio_pico_led, GpioModeOutputPushPull);
    //furi_hal_gpio_init_simple(&gpio_key1, GpioModeInput);
    furi_hal_gpio_add_int_callback(
        &gpio_key1,
        GpioConditionFall,
        key1_callback,
        NULL);
    while(true) {
        furi_hal_gpio_write(&gpio_pico_led, true);
        vTaskDelay(pdMS_TO_TICKS(100));
        furi_hal_gpio_write(&gpio_pico_led, false);
        vTaskDelay(pdMS_TO_TICKS(100));

        // if(!furi_hal_gpio_read(&gpio_key1)) {
        //     Log::info("Key1 is pressed");
        // }
    }
    furi_crash();
}

int main(void) {
    Log::init();

    xTaskCreate(task_main, "task_main", 1024 * 8, NULL, configMAX_PRIORITIES - 1, NULL);

    // somehow openocd fucks up the multicore reset
    // so we need to reset core1 manually
    sleep_ms(5);
    multicore_reset_core1();
    (void)multicore_fifo_pop_blocking();

    vTaskStartScheduler();

    /* should never reach here */
    panic_unsupported();

    // Initialize FURI layer

    // furi_init();

    // Critical FURI HAL
//    furi_hal_init_early();

//     FuriThread* main_thread = furi_thread_alloc_ex("Init", 4096, init_task, NULL);
//     furi_thread_set_priority(main_thread, FuriThreadPriorityInit);
// #ifdef FURI_RAM_EXEC
//     furi_thread_start(main_thread);
// #else
//     FuriHalNvmBootMode boot_mode = furi_hal_nvm_get_boot_mode();
//     if(boot_mode == FuriHalNvmBootModeUpdate) {
//         furi_delay_ms(200);
//         furi_hal_nvm_set_boot_mode(FuriHalNvmBootModeNormal);
//         platform_boot_to_update();
//         // If we are here, the switch to the update was not successful
//         // FURI_LOG_W(TAG, "Failed to switch to update mode");
//         furi_hal_power_reset();
//     } else {
//         furi_thread_start(main_thread);
//     }

// #endif
//     // Run Kernel
//     furi_run();

//     furi_crash("Kernel is Dead");
}

// void abort(void) {
//     //furi_crash("AbortHandler");
// }
