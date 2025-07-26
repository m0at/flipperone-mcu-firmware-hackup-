#include <ws2812.h>
#include <hardware/sync.h>

struct WS2812Color {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};
namespace WS2812Colors {
const WS2812Color red = {255, 0, 0};
const WS2812Color green = {0, 255, 0};
const WS2812Color blue = {0, 0, 255};
const WS2812Color yellow = {255, 255, 0};
const WS2812Color orange = {255, 165, 0};
const WS2812Color light_blue = {0x12, 0xCD, 0xD4};
const WS2812Color black = {0, 0, 0};
}

template <uint32_t pin, typename T, size_t length = 1>
class WS2812Strip {
public:
    void init(void) {
        ws2812_init(pin);
        for(size_t i = 0; i < length; i++) {
            colors[i] = {0, 0, 0}; // Initialize all pixels to black
        }
    }

    void flush(void) {
        uint32_t ints = save_and_disable_interrupts();
        for(size_t i = 0; i < length; i++) {
            uint8_t r = colors[i].r * brightness;
            uint8_t g = colors[i].g * brightness;
            uint8_t b = colors[i].b * brightness;
            ws2812_put_pixel_rgb(r, g, b);
        }
        restore_interrupts(ints);
    }

    void set_rgb(T index, WS2812Color color) {
        if(index < length) {
            colors[(size_t)index] = color;
        }
    }

    void set_rgb_all(WS2812Color color) {
        for(size_t i = 0; i < length; i++) {
            colors[i] = color;
        }
    }

    void set_brightness(float brightness) {
        if(brightness < 0.0f) {
            brightness = 0.0f;
        } else if(brightness > 1.0f) {
            brightness = 1.0f;
        }
        this->brightness = brightness;
    }

private:
    WS2812Color colors[length];
    float brightness = 1.0f;
};
