#ifndef SolidColorMode_h
#define SolidColorMode_h

#include <FastLED.h>
#include "Mode.h"

class SolidColorMode : public Mode
{
  public:
    SolidColorMode(uint8_t h, uint8_t s, uint8_t v, uint8_t b);
    virtual void prepareOnce(CRGB leds[]);
    virtual void execute(CRGB leds[], unsigned long deltaTime);
  private:
    uint8_t h;
    uint8_t s;
    uint8_t v;
    uint8_t b;
};
#endif