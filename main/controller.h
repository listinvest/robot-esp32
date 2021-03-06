#pragma once

#include "./motor.h"
#include "./server.h"
#include "freertos/queue.h"

// Indexes of x and y in remote_position vector
#define X_IDX 0
#define Y_IDX 1

typedef struct {
  motor left_motor;
  motor right_motor;
  float remote_position[2];
  float front_distance;
} controller;

xQueueHandle control_queue;

void control_init();

extern controller global_controller;
