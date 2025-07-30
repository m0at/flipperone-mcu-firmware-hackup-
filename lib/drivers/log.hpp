#pragma once
#include <stdio.h>
#include <pico/time.h>
#include <stdarg.h>
#include <pico/stdlib.h>
#include <FreeRTOS.h>
#include <semphr.h>

class Log {
#define COLOR(clr)   "\033[0;" clr "m"
#define COLOR_RESET  "\033[0m"
#define COLOR_RED    COLOR("31")
#define COLOR_GREEN  COLOR("32")
#define COLOR_BROWN  COLOR("33")
#define COLOR_PURPLE COLOR("35")
#define COLOR_CYAN   COLOR("36")

private:
    inline static SemaphoreHandle_t log_mutex = nullptr;
    inline static StaticSemaphore_t log_mutex_data;

    static void print(const char* tag, const char* message, va_list args, bool append_newline = true) {
        if(log_mutex == nullptr) {
            print_no_mutex(tag, message, args, append_newline);
        } else {
            print_with_mutex(tag, message, args, append_newline);
        }
    }

    static void print_no_mutex(const char* tag, const char* message, va_list args, bool append_newline = true) {
        printf("%ld", to_ms_since_boot(get_absolute_time()));
        printf(tag);
        vprintf(message, args);
        if(append_newline) printf("\n");
    }

    static void print_with_mutex(const char* tag, const char* message, va_list args, bool append_newline = true) {
        hard_assert(xSemaphoreTake(log_mutex, portMAX_DELAY));
        print_no_mutex(tag, message, args, append_newline);
        hard_assert(xSemaphoreGive(log_mutex));
    }

public:
    static void init(void) {
        stdio_init_all();
        log_mutex = xSemaphoreCreateMutexStatic(&log_mutex_data);
        hard_assert(log_mutex != NULL);

        printf(COLOR_GREEN);
        printf("\n");
        printf("--------------------------------\n");
        printf("|        RP2350 Started        |\n");
        printf("--------------------------------\n");
        printf(COLOR_RESET);
    }

    static void trace(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_PURPLE " [T] " COLOR_RESET, message, args);
        va_end(args);
    }

    static void warn(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_BROWN " [W] " COLOR_RESET, message, args);
        va_end(args);
    }

    static void info(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_GREEN " [I] " COLOR_RESET, message, args);
        va_end(args);
    }

    static void error(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_RED " [E] " COLOR_RESET, message, args);
        va_end(args);
    }

    static void user(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_CYAN " [U] " COLOR_RESET, message, args);
        va_end(args);
    }

    static void trace_no_newline(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_PURPLE " [T] " COLOR_RESET, message, args, false);
        va_end(args);
    }

    static void warn_no_newline(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_BROWN " [W] " COLOR_RESET, message, args, false);
        va_end(args);
    }

    static void info_no_newline(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_GREEN " [I] " COLOR_RESET, message, args, false);
        va_end(args);
    }

    static void error_no_newline(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_RED " [E] " COLOR_RESET, message, args, false);
        va_end(args);
    }

    static void user_no_newline(const char* message, ...) {
        va_list args;
        va_start(args, message);
        print(COLOR_CYAN " [U] " COLOR_RESET, message, args, false);
        va_end(args);
    }
};
