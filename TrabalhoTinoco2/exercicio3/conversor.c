#include "conversor.h"
#include <stdio.h>

float celsius_fahrenheit(float c){
    float f = 0;
    f = (c * 1.8) + 32;
    return f;
}

float fahrenheit_celsius(float f){
    float c = 0;
    c = (f - 32) / 1.8;
    return c;
}