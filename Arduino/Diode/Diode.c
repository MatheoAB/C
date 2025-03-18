#include "Arduino.h"
#include "Diode.h"

Diode::Diode(int pin)
    {
        pinMode(pin, OUTPUT);
        _pin = pin;
    }

voidDiode::oncourt()
    {
        digitalWrite(_pin, HIGH);
        delay(250);
        digitalWrite(_pin, LOW);
        delay(250);
    }
voidDiode::onlong()
    {
        digitalWrite(_pin, HIGH);
        delay(750);
        digitalWrite(_pin, LOW);
        delay(250);
    }