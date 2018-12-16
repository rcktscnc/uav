#include "nstdio.h"

namespace nstd {

char io::stdio_buffer[NSTDIO_BUFFER_SIZE] = { 0 };

void io::init() {
    Serial.begin(NSTDIO_SERIAL_PORT);
}

}
