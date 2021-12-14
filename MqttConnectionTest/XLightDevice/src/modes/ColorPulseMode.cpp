#include "modes/ColorPulseMode.h"

ColorPulseMode::ColorPulseMode(uint8_t h, uint8_t s, uint8_t v, uint8_t b, uint8_t speed){
    this->h = h;
    this->s = s;
    this->v = v;
    this->b = b;
    this->speed = speed;
}

void ColorPulseMode::execute(CRGB leds[]){
    Serial.println("+++++++++++++++");
    Serial.println("Color pulse mode set");
    Serial.println(h);
    Serial.println(s);
    Serial.println(v);
    Serial.println(b);
    Serial.println("+++++++++++++++");
}