#include<stdint.h>
#include<stdio.h>
#include<inttypes.h>

void main() {
    uint8_t led_state = 0x00;
    scanf("%"SCNu8, &led_state);

    if (led_state == 0x00){
        printf("LED is OFF\n");
    } else if (led_state == 0x01){
        printf("LED is ON\n");
    }
    else {
        printf("Invalid LED state\n");
    }

}