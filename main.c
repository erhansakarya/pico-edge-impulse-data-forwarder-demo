#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();

    for(;;) {
        printf("%.2f, %.2f, %.2f\n", -0.12, -6.20, 7.90);
        sleep_ms(100); // 10Hz
    }
}