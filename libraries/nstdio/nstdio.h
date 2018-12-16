#ifndef _NSTDIO_H
#define _NSTDIO_H

#include "Arduino.h"
#include "config.h"

namespace nstd {

class io {
public:
    static void init();

    template<typename... Ts>
    static size_t printf(const char* format, Ts... args);

private:
    static char stdio_buffer[NSTDIO_BUFFER_SIZE];
};

template<typename... Ts>
size_t io::printf(const char* format, Ts... args) {
    sprintf(stdio_buffer, format, args...);
    return Serial.print(stdio_buffer);
}

}

#endif
