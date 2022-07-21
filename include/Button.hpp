#ifndef BUTTON_H
#define BUTTON_H
#include <Arduino.h>

/*
    The Button class creates a more legible way to use push buttons 
    in your Arduino circuits.
*/
class Button
{
private:
    size_t pin;
public:
    Button(size_t pin);
    bool Pressed();
};

// @param pin The pin to read voltage from. It will be set to INPUT automatically.
Button::Button(size_t pin) : pin(pin)
{
    pinMode(pin, INPUT);
}

// Returns whether or not the button is being pressed.
bool Button::Pressed()
{
    return digitalRead(pin);
}

#endif // BUTTON_H