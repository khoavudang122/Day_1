#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>

typedef struct  {
    volatile uint8_t motor_temperature_c;
    volatile uint16_t motor_rpm;
    volatile uint8_t emergency_stop;
    volatile float motor_current_a;
    enum {
        NO_ERROR = 0, 
        OVER_TEMPERATURE = 1,
        OVER_CURRENT = 2,
        OVER_SPEED = 3,
        EMERGENCY_STOP = 4
    } error_code;
    enum {
        STOP = 0,
        RUNNING = 1,
        ERROR = 2
    } motor_state;
} sensor_Node;

void main(){
    sensor_Node* sensor_data = NULL ;
    sensor_data = (sensor_Node*)malloc(sizeof(sensor_Node));
    scanf("%"SCNu8, &sensor_data->motor_temperature_c);
    scanf("%f", &sensor_data->motor_current_a);
    scanf("%"SCNu16, &sensor_data->motor_rpm);
    scanf("%"SCNu8, &sensor_data->emergency_stop);

    if (sensor_data->motor_temperature_c > 80) {
        sensor_data->error_code = OVER_TEMPERATURE;
        sensor_data->motor_state = ERROR;
    } else if (sensor_data->motor_current_a > 3.0) {
        sensor_data->error_code = OVER_CURRENT;
        sensor_data->motor_state = ERROR;
    } else if (sensor_data->motor_rpm > 5000) {
        sensor_data->error_code = OVER_SPEED;
        sensor_data->motor_state = ERROR;
    } else if (sensor_data->emergency_stop == 1) {
        sensor_data->error_code = EMERGENCY_STOP;
        sensor_data->motor_state = ERROR;
    } else {
        sensor_data->error_code = NO_ERROR;
        sensor_data->motor_state = RUNNING;
    }

    printf("===== MOTOR CONTROLLER =====\n");
    printf("Temperature : %"PRIu8"\n", sensor_data->motor_temperature_c);
    printf("Current : %.1f\n", sensor_data->motor_current_a);
    printf("RPM : %"PRIu16"\n", sensor_data->motor_rpm);
    printf("Emergency : %"PRIu8"\n", sensor_data->emergency_stop);
    printf("Motor State : %"PRIu8"\n", sensor_data->motor_state);
    printf("Error Code : %"PRIu8"\n", sensor_data->error_code);


}