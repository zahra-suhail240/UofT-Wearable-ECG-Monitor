// kernel and logging
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

// device tree
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/spi.h>

int initialize_MAX();

int main(void) {
    // TO DO: initialize MAX30001G for interrupts with INTB
    initialize_MAX();
}

int initialize_MAX() {

}

// TO DO: configure SPI_read_thread


SPI_read_thread() {
    // TO DO: log message and toggle LED

}