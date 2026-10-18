#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"

static const char *TAG = "EXAM_PROCTOR_NODE";

void app_main(void) {
    ESP_LOGI(TAG, "Initializing Smart Exam Integrity System...");
    ESP_LOGI(TAG, "System Status: Online. Tracking sensor environment metrics...");

    while(1) {
        // Mock execution payload simulating telemetry logging
        printf("[TELEMETRY] Mon, 18 Oct 2026 18:47:00 IST - Room Active - No Anomalies\n");
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}
