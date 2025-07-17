🔦 ESP32 LED Blink Using FreeRTOS
This project demonstrates a basic LED blink program using ESP32, written in C with the ESP-IDF framework.

The onboard LED connected to GPIO2 is toggled ON and OFF every 500 milliseconds.

The code uses FreeRTOS tasks (vTaskDelay) to create a non-blocking delay.

✅ Features
Written in pure C using ESP-IDF

Uses gpio_set_level() to control output

Delay handled by FreeRTOS

📁 Folder Suggestion
src/ → contains main.c

platformio.ini or CMakeLists.txt (depending on build system)

.gitignore for PlatformIO or ESP-IDF

