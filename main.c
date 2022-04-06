#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();

    for(;;) {
        printf("Hello World!\n");
        sleep_ms(500);
    }
}