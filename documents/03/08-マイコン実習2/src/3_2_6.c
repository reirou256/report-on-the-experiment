#include <stdio.h>
#include "c:\work\e3exp.h"

int main(void) {
  init_MTLED();

  char char_set[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x24,
    0x44, 0x24, 0x1f, 0x00, 0x7f, 0x49, 0x49, 0x49,
    0x36, 0x00, 0x7f, 0x08, 0x14, 0x22, 0x41
  };

  int offset = 0;
  int i = 0;

  while (1) {
    for (i = 0; i < 8; i++) {
      send_one(i + 1, char_set[(i + offset) % 24]);
    }
    delayms(200);
    offset++;
  }
}
