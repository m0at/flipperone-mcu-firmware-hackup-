#include <furi.h>
#include <furi_hal_gpio.h>
#include <hardware/exception.h>
#include <hardware/adc.h>
// // #include <furi_hal_version.h>
// #include <furi_hal_resources.h>
// #include <stm32u5xx_ll_exti.h>
// #include <stm32u5xx_ll_pwr.h>
// // #include <stm32u5xx_ll_comp.h>

// static uint32_t furi_hal_gpio_invalid_argument_crash(void) {
//     furi_crash("Invalid argument");
//     return 0;
// }

// #define GPIO_PORT_MAP(port, prefix)              \
//     (((port) == (GPIOA)) ? (uint32_t)prefix##A : \
//      ((port) == (GPIOB)) ? (uint32_t)prefix##B : \
//      ((port) == (GPIOC)) ? (uint32_t)prefix##C : \
//      ((port) == (GPIOD)) ? (uint32_t)prefix##D : \
//      ((port) == (GPIOE)) ? (uint32_t)prefix##E : \
//      ((port) == (GPIOF)) ? (uint32_t)prefix##F : \
//      ((port) == (GPIOG)) ? (uint32_t)prefix##G : \
//      ((port) == (GPIOH)) ? (uint32_t)prefix##H : \
//      ((port) == (GPIOI)) ? (uint32_t)prefix##I : \
//      ((port) == (GPIOJ)) ? (uint32_t)prefix##J : \
//                            furi_hal_gpio_invalid_argument_crash())

// #define GPIO_PIN_MAP(pin, prefix)               \
//     (((pin) == (LL_GPIO_PIN_0))  ? prefix##0 :  \
//      ((pin) == (LL_GPIO_PIN_1))  ? prefix##1 :  \
//      ((pin) == (LL_GPIO_PIN_2))  ? prefix##2 :  \
//      ((pin) == (LL_GPIO_PIN_3))  ? prefix##3 :  \
//      ((pin) == (LL_GPIO_PIN_4))  ? prefix##4 :  \
//      ((pin) == (LL_GPIO_PIN_5))  ? prefix##5 :  \
//      ((pin) == (LL_GPIO_PIN_6))  ? prefix##6 :  \
//      ((pin) == (LL_GPIO_PIN_7))  ? prefix##7 :  \
//      ((pin) == (LL_GPIO_PIN_8))  ? prefix##8 :  \
//      ((pin) == (LL_GPIO_PIN_9))  ? prefix##9 :  \
//      ((pin) == (LL_GPIO_PIN_10)) ? prefix##10 : \
//      ((pin) == (LL_GPIO_PIN_11)) ? prefix##11 : \
//      ((pin) == (LL_GPIO_PIN_12)) ? prefix##12 : \
//      ((pin) == (LL_GPIO_PIN_13)) ? prefix##13 : \
//      ((pin) == (LL_GPIO_PIN_14)) ? prefix##14 : \
//      ((pin) == (LL_GPIO_PIN_15)) ? prefix##15 : \
//                                    furi_hal_gpio_invalid_argument_crash())

// #define GET_EXTI_EXTI_PORT(port) GPIO_PORT_MAP(port, LL_EXTI_EXTI_PORT)
// #define GET_EXTI_EXTI_LINE(pin)  GPIO_PIN_MAP(pin, LL_EXTI_EXTI_LINE)
// #define GET_EXTI_LINE(pin)       GPIO_PIN_MAP(pin, LL_EXTI_LINE_)

// #define GET_PWR_PORT(port) GPIO_PORT_MAP(port, LL_PWR_GPIO_PORT)
// #define GET_PWR_PIN(pin)   GPIO_PIN_MAP(pin, LL_PWR_GPIO_PIN_)

// typedef struct {
//     GpioExtiCallback callback;
// } GpioExtiCallbackHandler;
// typedef void (*GpioInterruptCallbackHandler)(uint gpio, uint32_t event_mask);

static volatile GpioInterrupt gpio_interrupt[GPIO_NUMBER];
// static volatile GpioInterruptCallbackHandler gpio_interrupt_callback_handler[GPIO_NUMBER];

// static uint8_t furi_hal_gpio_get_pin_num(const GpioPin* gpio) {
//     uint8_t pin_num = 0;
//     for(pin_num = 0; pin_num < GPIO_NUMBER; pin_num++) {
//         if(gpio->pin & (1 << pin_num)) break;
//     }
//     return pin_num;
// }

void furi_hal_gpio_callback(uint gpio, uint32_t event_mask);

void furi_hal_gpio_init_simple(const GpioPin* gpio, const GpioMode mode) {
    furi_hal_gpio_init(gpio, mode, GpioPullNo, GpioSpeedLow);
}

void furi_hal_gpio_init(
    const GpioPin* gpio,
    const GpioMode mode,
    const GpioPull pull,
    const GpioSpeed speed) {
    // // we cannot set alternate mode in this function
    // furi_check(mode != GpioModeAltFunctionPushPull);
    // furi_check(mode != GpioModeAltFunctionOpenDrain);

    furi_hal_gpio_init_ex(gpio, mode, pull, speed, GpioAltFn5Sio);
}

void furi_hal_gpio_init_ex(
    const GpioPin* gpio,
    const GpioMode mode,
    const GpioPull pull,
    const GpioSpeed speed,
    const GpioAltFn alt_fn) {
    
    // Configure gpio with interrupts disabled
    FURI_CRITICAL_ENTER();

    gpio_set_function(gpio->pin, alt_fn);

    // Set gpio speed
    switch(speed) {
    case GpioSpeedLow:
        gpio_set_slew_rate(gpio->pin, GPIO_SLEW_RATE_SLOW);
        break; 
    case GpioSpeedFast:
        gpio_set_slew_rate(gpio->pin, GPIO_SLEW_RATE_FAST);   
        break;
    default:
        //furi_crash("Incorrect GpioSpeed");
        break;
    }

    // Set gpio pull mode
    switch(pull) {
    case GpioPullNo:
        gpio_set_pulls(gpio->pin, false, false);
        break;
    case GpioPullUp:
        gpio_set_pulls(gpio->pin, true, false);
        break;
    case GpioPullDown:
        gpio_set_pulls(gpio->pin, false, true);
        break;
    default:
        //furi_crash("Incorrect GpioPull");
        break;
    }

    // Set gpio mode
    switch(mode) {
    case GpioModeInput:
        gpio_set_dir(gpio->pin, GPIO_IN);
        break;
    case GpioModeOutputPushPull:
        gpio_set_dir(gpio->pin, GPIO_OUT);
        break;
    case GpioModeOutputOpenDrain:
        // Open drain not supported directly, set as output for now
        //Todo: implement open drain using GPIO registers directly
        gpio_set_dir(gpio->pin, GPIO_OUT);
        break;
    case GpioModeAnalog:
        adc_gpio_init(gpio->pin);
        break;
    default:
        //furi_crash("Incorrect GpioMode");
        break;    
    }
    
    FURI_CRITICAL_EXIT();
}

void furi_hal_gpio_add_int_callback(const GpioPin* gpio, GpioCondition condition, GpioExtiCallback cb, void* ctx) {
    // furi_check(gpio->pin <= NUM_BANK0_GPIOS);
    // furi_check(cb);

    FURI_CRITICAL_ENTER();
    //furi_check(gpio_interrupt[gpio->pin].callback == NULL);
    gpio_interrupt[gpio->pin].callback = cb;
    gpio_interrupt[gpio->pin].context = ctx;

    gpio_set_irq_enabled_with_callback(
        gpio->pin,
        (condition == GpioConditionRise) ? GPIO_IRQ_EDGE_RISE :
        (condition == GpioConditionFall) ? GPIO_IRQ_EDGE_FALL :
        (condition == GpioConditionRiseFall) ? GPIO_IRQ_EDGE_RISE | GPIO_IRQ_EDGE_FALL : 0,
        true,
        furi_hal_gpio_callback);

    FURI_CRITICAL_EXIT();
}

void furi_hal_gpio_enable_int_callback(const GpioPin* gpio) {
    // furi_check(gpio->pin <= NUM_BANK0_GPIOS);

    FURI_CRITICAL_ENTER();

    irq_set_enabled(gpio->pin, true);

    FURI_CRITICAL_EXIT();
}

void furi_hal_gpio_disable_int_callback(const GpioPin* gpio) {
    //furi_check(gpio->pin <= NUM_BANK0_GPIOS);

    FURI_CRITICAL_ENTER();

    irq_set_enabled(gpio->pin, false);

    FURI_CRITICAL_EXIT();
}

void furi_hal_gpio_remove_int_callback(const GpioPin* gpio) {
    //furi_check(gpio->pin <= NUM_BANK0_GPIOS);

    FURI_CRITICAL_ENTER();
    gpio_set_irq_enabled_with_callback(gpio->pin, 0, false, NULL);
    gpio_interrupt[gpio->pin].callback = NULL;
    gpio_interrupt[gpio->pin].context = NULL;

    FURI_CRITICAL_EXIT();
}

FURI_ALWAYS_INLINE static void furi_hal_gpio_int_call(uint16_t pin_num) {
    if(gpio_interrupt[pin_num].callback) {
        gpio_interrupt[pin_num].callback(gpio_interrupt[pin_num].context);
    }
}

void furi_hal_gpio_callback(uint gpio, uint32_t event_mask) {
    furi_hal_gpio_int_call(gpio);
}