#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

void main(){
    uint16_t adc_value = 0x00;
    scanf("%"SCNu16, &adc_value);
    if ( (adc_value <= 4095) && (adc_value >= 0x0000) ){
        printf("ADC value is %"PRIu16" \n", adc_value);
    }else {
        printf("Invalid ADC value\n");
    }

}