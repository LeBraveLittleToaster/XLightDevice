#ifndef Mode_h
#define Mode_h

#include <FastLED.h>

class Mode
{
  public:
    Mode();
    virtual void prepareOnce(CRGB leds[]);
    virtual void execute(CRGB leds[], unsigned long deltaTime);
  private:
};
#endif