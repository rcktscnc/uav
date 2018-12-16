#ifndef _NSTDIO_H
#define _NSTDIO_H

#include "Arduino.h"

namespace nstd {

namespace params {
    const int STDIO_SERIAL_PORT = 9600;
    const int STDIO_BUFFER_SIZE = 255;
}

class io {
public:
    static void init();

    template<typename... Ts>
    static size_t printf(const char* format, Ts... args);

private:
    static char STDIO_BUFFER[params::STDIO_BUFFER_SIZE];
};

template<typename... Ts>
size_t io::printf(const char* format, Ts... args) {
    sprintf(STDIO_BUFFER, format, args...);
    return Serial.print(STDIO_BUFFER);
}

}

#endif
