#include "modes/Mode.h"

ModeManager::ModeManager(CRGB leds[]){
    leds = leds;
}

void ModeManager::setMode(Mode* mode){
    this->curMode = mode;
}

void ModeManager::tick(){
    curMode->execute(leds);
}