#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_2  // GPIO2 is usually the onboard LED

void app_main(void) {
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

    while (1) {
        gpio_set_level(LED_PIN, 1); // LED ON
        vTaskDelay(500 / portTICK_PERIOD_MS);

        gpio_set_level(LED_PIN, 0); // LED OFF
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}
//this is comment


//this comment 2



//this comment 3

//this comment 4


