#include<stdint.h>
#include<stdio.h>
#include<inttypes.h>


void main() {

    uint32_t motor_rpm = 0x00;
    scanf("%"SCNu32, &motor_rpm);

    while ( motor_rpm < 0 || motor_rpm > 10000 ) {
        printf(" Vui lòng nhập lại tốc độ động cơ từ 0 đến 10000 vòng/phút: ");
        scanf("%"SCNu32, &motor_rpm);
    }
    if ( motor_rpm >= 0 && motor_rpm < 3000 )
    {
        printf("Tốc độ động cơ là %"PRIu32" vòng/phút\n", motor_rpm);
        printf("STATUS: Tốc độ động cơ thấp\n");
    }
    else if ( motor_rpm >= 3000 && motor_rpm <= 7000 )
    {
        printf("Tốc độ động cơ là %"PRIu32" vòng/phút\n", motor_rpm);
        printf("STATUS: Tốc độ động cơ bình thường\n");
    }
    else
    {
        printf("Tốc độ động cơ là %"PRIu32" vòng/phút\n", motor_rpm);
        printf("STATUS: Tốc độ động cơ cao\n");
    }

}
