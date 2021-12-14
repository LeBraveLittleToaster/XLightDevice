#ifndef Mode_h
#define Mode_h

#include <FastLED.h>

class Mode
{
  public:
    Mode();
    virtual ~Mode() = default;
    virtual void execute(CRGB leds[]);
  private:
};
#endif