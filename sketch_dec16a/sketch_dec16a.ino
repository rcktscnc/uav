#include "nstdio.h"

void setup() {
  nstd::io::init();
}

void loop() {
  static int counter = 0;
  nstd::io::printf("%d...%d\n", ++counter);
  nstd::io::printf("%d...%d\n", ++counter, counter);
  nstd::io::printf("%d...%s\n", ++counter, "HAHA MEMORY");
  delay(500);
}
