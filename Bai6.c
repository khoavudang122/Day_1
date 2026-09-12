#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>
struct sensor_Node {
    uint8_t errol_code;
    int8_t temperature;
    uint16_t sensor_id;
    uint16_t motor_rpm;
    uint16_t adc_value;
};

void main(){
    
    struct sensor_Node* sensor_data = NULL ;
    sensor_data = (struct sensor_Node*)malloc(sizeof(struct sensor_Node));
    sensor_data = (struct sensor_Node*)malloc(sizeof(struct sensor_Node));
    scanf("%"SCNu8, &sensor_data->errol_code);
    scanf("%"SCNu8, &sensor_data->temperature);
    scanf("%"SCNu16, &sensor_data->sensor_id);  
    scanf("%"SCNu16, &sensor_data->motor_rpm);
    scanf("%"SCNu16, &sensor_data->adc_value);
    printf("ERROL CODE: %"PRIu8"\n", sensor_data->errol_code);
    printf("TEMPERATURE: %"PRIi8"\n", sensor_data->temperature);
    printf("SENSOR ID: %"PRIu16"\n", sensor_data->sensor_id);
    printf("MOTOR RPM: %"PRIu16"\n", sensor_data->motor_rpm);
    printf("ADC VALUE: %"PRIu16"\n", sensor_data->adc_value);
    printf("SIZE OF STRUCT: %zu bytes\n", sizeof( &(*sensor_data)));
    free(sensor_data);
}
