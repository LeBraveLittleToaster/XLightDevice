#include <Arduino.h>
#include <FastLED.h>

// MODE SOLID COLOR INDEX = 1

typedef struct ModeSolidColorBundle
{
    uint8_t h;
    uint8_t s;
    uint8_t v;
    uint8_t b;    
};

void setSolidColorMode(CRGB leds[], ModeSolidColorBundle bundle);

// MODE RUNNING COLOR

typedef struct ModeRunningColorBundle
{
    uint8_t h;
    uint8_t s;
    uint8_t v;
    uint8_t b;    
    uint8_t speed;
};

void setModeRunningColor(CRGB leds[], ModeRunningColorBundle bundle);