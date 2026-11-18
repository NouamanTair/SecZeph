# SecZeph

An embedded systems project built on Zephyr RTOS.

## Project goals

- Learn and implement a secure boot flow with Zephyr.
- Add Wi-Fi support on an ESP32 board.
- Control a motor from an STM32 board.

The application currently contains a minimal Zephyr example. The Zephyr version is pinned in `west.yml`, and the development container and VS Code configuration are provided in this repository.

## Build and run

From the application directory, build and run the native simulator:

```sh
west build -b native_sim
./build/zephyr/zephyr.exe
```

For a supported physical board, build with its board target and flash it with `west flash`.
