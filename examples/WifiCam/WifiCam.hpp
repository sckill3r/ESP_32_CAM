#ifndef WIFICAM_HPP
#define WIFICAM_HPP

#include <esp32cam.h>

#include <WebServer.h>

/** @brief Flash LED on AI Thinker ESP32-CAM (GPIO 4, active HIGH). */
static constexpr int FLASH_LED_PIN = 4;

/** @brief How long the flash is on before the picture is taken, so exposure can adjust. */
static constexpr int FLASH_WARMUP_MS = 150;

extern esp32cam::Resolution initialResolution;

extern WebServer server;

void
addRequestHandlers();

#endif // WIFICAM_HPP
