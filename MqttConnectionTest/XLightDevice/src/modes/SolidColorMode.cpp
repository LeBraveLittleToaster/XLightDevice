#include "modes/SolidColorMode.h"

SolidColorMode::SolidColorMode(uint8_t h, uint8_t s, uint8_t v, uint8_t b){
    this->h = h;
    this->s = s;
    this->v = v;
    this->b = b;
}

void SolidColorMode::execute(CRGB leds[], unsigned long deltaTime){
    Serial.println("+++++++++++++++");
    Serial.println("Solid Color mode set");
    Serial.println(h);
    Serial.println(s);
    Serial.println(v);
    Serial.println(b);
    Serial.println("+++++++++++++++");
}

void SolidColorMode::prepareOnce(CRGB leds[]){

}