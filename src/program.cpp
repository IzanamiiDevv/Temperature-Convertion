//#include <emscripten.h>
#include <iostream>

extern "C" {
//    EMSCRIPTEN_KEEPALIVE
    double faren(double temp) {
        return (1.8 * temp) + 32.0;
    }

//    EMSCRIPTEN_KEEPALIVE
    double celci(double temp) {
        return (temp - 32) / 1.8;
    }
}
