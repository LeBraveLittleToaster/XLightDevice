#ifndef ModeManager_h
#define ModeManager_h

#include <FastLED.h>
#include <queue>

class ModeManager
{
  CRGB leds[];
  public:
    ModeManager(CRGB leds[]);
    void tick();
    void setMode(Mode* mode);
  private:
    Mode* curMode;
};
#endif