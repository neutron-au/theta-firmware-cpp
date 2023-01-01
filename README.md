Theta Firmware (C++)
=====================================
Purpose.
The purpose of this firmware is to increase the performance of the ECU, and allowing the development to be based around adding features while not having to worry about speed, as C++ is natively easy to write efficient code in compared to other languages such as MicroPython.


Installation
=====================================
1. With PlatformIO and the Espressif board configurations installed, create a new project in CLion called `theta-firmware`
2. Select the board type as `denky/wroom32`
3. Once the project has auto-filled all preset files, copy and paste all files, as is, from this repository into the root folder of the `theta-firmware` directory.
4. To build and upload the firmware, you need to enter the following commands:

```shell
# Change directory to example
$ cd theta-firmware/

# Build and upload project
$ clear && pio run -e esp32dev --target upload

```

`Note: when the firmware is attempting to upload, you will need to momentarily hold the bootsel button on the ESP to put it in download mode, allowing the new firmware to be flashed.`
