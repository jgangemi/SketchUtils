#include "SketchUtils.h"

#define HUNG_DELAY 75

/*
 * blink using 'delay'
 */
void SketchUtils::blink(int ledPin, long millis)
{
    digitalWrite(ledPin, HIGH);
    delay(millis);
    
    digitalWrite(ledPin, LOW);
    delay(millis);
}

void SketchUtils::hang()
{
    while(1);
}

void SketchUtils::hang(int ledPin)
{
    while(1)
    {
        SketchUtils::blink(ledPin, HUNG_DELAY);
    }    
}

void SketchUtils::setAsInput(int size, int leds[])
{
    setPinMode(size, leds, INPUT);
}

void SketchUtils::setAsOutput(int size, int leds[])
{
    setPinMode(size, leds, OUTPUT);
}

// private

void SketchUtils::setPinMode(int size, int leds[], int mode)
{
    for (int i = 0; i < size; i++)
    {
        pinMode(leds[i], mode);
    }
}

SketchUtils sketchUtils = SketchUtils();
