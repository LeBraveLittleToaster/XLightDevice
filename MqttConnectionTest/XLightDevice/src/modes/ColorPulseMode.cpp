#include "modes/ColorPulseMode.h"
#include "ledstrip_conf.h"
#include <math.h>

ColorPulseMode::ColorPulseMode(uint8_t h, uint8_t s, uint8_t v, uint8_t b, uint8_t speed)
{
    this->h = h;
    this->s = s;
    this->v = v;
    this->b = b;
    this->speed = speed;
    this->curSinPhase = 0.0;
}

// increase phase 100 each second multiplied by 1 / speed
void ColorPulseMode::execute(CRGB leds[], unsigned long deltaTime)
{
    if (this->speed != 0)
    {

        curSinPhase += deltaTime * 0.001 * this->speed;
        uint8_t sinAngle = div(curSinPhase, 255).rem;
        
        FastLED.setBrightness(cubicwave8(sinAngle) * this->b / 255);
        FastLED.show();
    }
}

void ColorPulseMode::prepareOnce(CRGB leds[])
{
    Serial.println("Preparing color pulse");
    FastLED.setBrightness(b);
    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CHSV(h,s,v);
        
    }
    FastLED.show();
    delay(1000);
}