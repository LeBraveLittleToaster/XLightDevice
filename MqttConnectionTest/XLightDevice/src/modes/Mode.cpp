#include "modes/Mode.h"
#include "ledstrip_conf.h"

Mode::Mode()
{
}

void Mode::execute(CRGB leds[],unsigned long deltaTime)
{
    Serial.println("Running default mode");
    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CHSV(0, 0, 0);
    }
}

void Mode::prepareOnce(CRGB leds[]){

}