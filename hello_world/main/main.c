#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN 13

void app_main(void){
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    while(1) {
        printf("Hello world!\n");
        gpio_set_level(LED_PIN,1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(LED_PIN,0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
