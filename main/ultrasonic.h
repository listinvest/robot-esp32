#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

typedef struct {
  gpio_num_t trig;
  gpio_num_t echo;
  xQueueHandle event_queue;
} ultrasonic_sensor;

void poll_distance();
