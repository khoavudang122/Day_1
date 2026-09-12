#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void main() {
    uint8_t overheat = 70;
    uint8_t temperature_c = 0x00;
    scanf("%"SCNu8, &temperature_c);

    while ( temperature_c < 0 || temperature_c >100 ) {
        printf(" Vui lòng nhập lại nhiệt độ từ 0 đến 100 độ C: ");
        scanf("%"SCNu8, &temperature_c);
    }
    
    if ( temperature_c > 0 && temperature_c < overheat )
    {
        printf("Nhiệt độ là %"PRIu8" độ C\n", temperature_c);
        printf("STATUS: Nhiệt độ bình thường\n");
    }
    else if ( temperature_c >= overheat && temperature_c <= 90)
    {
        printf("Nhiệt độ là %"PRIu8" độ C\n", temperature_c);
        printf("STATUS: Nhiệt độ cao\n");
    }
    else
    {
        printf("Nhiệt độ là %"PRIu8" độ C\n", temperature_c);
        printf("STATUS: Nhiệt độ lạnh\n");
    }

}