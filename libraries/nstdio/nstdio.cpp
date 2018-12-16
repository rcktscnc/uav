#include "nstdio.h"

namespace nstd {

char io::STDIO_BUFFER[params::STDIO_BUFFER_SIZE] = { 0 };

void io::init() {
    Serial.begin(params::STDIO_SERIAL_PORT);
}

}
