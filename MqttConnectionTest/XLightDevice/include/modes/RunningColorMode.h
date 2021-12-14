#ifndef RunningColorMode_h
#define RunningColorMode_h

#include <FastLED.h>
#include "Mode.h"

class RunningColorMode : public Mode
{
  public:
    RunningColorMode(uint8_t h, uint8_t s, uint8_t v, uint8_t b, uint8_t speed);
    virtual void execute(CRGB leds[]);
  private:
    uint8_t h;
    uint8_t s;
    uint8_t v;
    uint8_t b;
    uint8_t speed;
};
#endif