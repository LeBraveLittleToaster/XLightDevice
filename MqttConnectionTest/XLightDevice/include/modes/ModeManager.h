#ifndef ModeManager_h
#define ModeManager_h

#include <FastLED.h>
#include <queue>
#include <ArduinoJson.h>

class ModeManager
{
  CRGB leds[];
  public:
    ModeManager(CRGB leds[]);
    void tick(unsigned long deltaTime);
    void setMode(Mode* mode, CRGB leds[]);
    void setModeFromMessage(StaticJsonDocument<96> doc, CRGB leds[]);
  private:
    Mode* curMode;
};
#endif