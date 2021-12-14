#ifndef ColorPulseMode_h
#define ColorPulseMode_h

#include <FastLED.h>
#include "Mode.h"

class ColorPulseMode : public Mode
{
  public:
    ColorPulseMode(uint8_t h, uint8_t s, uint8_t v, uint8_t b, uint8_t speed);
    virtual void prepareOnce(CRGB leds[]);
    virtual void execute(CRGB leds[], unsigned long deltaTime);
  private:
    uint8_t h;
    uint8_t s;
    uint8_t v;
    uint8_t b;
    uint8_t speed;
    float curSinPhase;
};
#endif