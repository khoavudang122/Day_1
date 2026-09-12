#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

void main() {

    uint32_t packet_count = 0x00;
    scanf("%"SCNu32, &packet_count);
    uint32_t packet_send = 1000000;
    while (packet_count < packet_send) {
        packet_count++;
    }
    printf("Packet count is %"PRIu32" \n", packet_count);
}