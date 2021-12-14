#include "modes/Mode.h"
#include "modes/ModeManager.h"
#include "modes/SolidColorMode.h"
#include "modes/RunningColorMode.h"
#include "modes/ColorPulseMode.h"

ModeManager::ModeManager(CRGB leds[])
{
    leds = leds;
}

void ModeManager::setMode(Mode *mode, CRGB leds[])
{
    this->curMode = mode;
    this->curMode->prepareOnce(leds);
}

void ModeManager::tick(unsigned long deltaTime)
{
    curMode->execute(leds, deltaTime);
}

//Color mapping:
// 1 = SolidColorMode
// 2 = RunningColorMode
// 3 = ColorPulseMode
void ModeManager::setModeFromMessage(StaticJsonDocument<96> doc, CRGB leds[])
{
    
    const int mode = doc["modeId"];

    if(mode == 1){
        curMode = new SolidColorMode(doc["h"], doc["s"], doc["v"], doc["b"]);
        curMode->prepareOnce(leds);
    }else if(mode == 2){
        curMode = new RunningColorMode(doc["h"], doc["s"], doc["v"], doc["b"], doc["speed"]);
        curMode->prepareOnce(leds);
    }else if(mode == 3){
        curMode = new ColorPulseMode(doc["h"], doc["s"], doc["v"], doc["b"], doc[""]);
        curMode->prepareOnce(leds);
    }
}