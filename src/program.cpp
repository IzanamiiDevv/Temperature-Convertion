//#include <emscripten.h>
#include <iostream>

using namespace std;

extern "C" {
//    EMSCRIPTEN_KEEPALIVE
    int convert(char unit,double temp) {
        return (unit == 'f') ? (1.8 * temp) + 32 
        : (temp - 32) / 1.8;
    } 
}