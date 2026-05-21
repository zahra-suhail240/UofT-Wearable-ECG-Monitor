// kernel and logging
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

// device tree
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/spi.h>

// TO DO: configure SPI_read_thread
#define SPI_READ_THREAD_STACK_SIZE 1024
#define SPI_READ_THREAD_PRIORITY 5
#define SPI_READ_THREAD_OPTIONS 0
K_THREAD_STACK_DEFINE(SPI_read_thread_stack, SPI_READ_THREAD_STACK_SIZE);
struct k_thread SPI_read_thread_data;
void SPI_read_thread(void *, void *, void *);

int initialize_MAX();

int main(void) {
    // TO DO: initialize MAX30001G for interrupts with INTB
    initialize_MAX();

    // create threads
    k_tid_t SPI_read_thread_id = k_thread_create(
        &SPI_read_thread_data,
        &SPI_read_thread_stack, K_THREAD_STACK_SIZEOF(SPI_read_thread_stack),
        SPI_read_thread, NULL, NULL, NULL,
        SPI_READ_THREAD_PRIORITY,
        SPI_READ_THREAD_OPTIONS,
        K_NO_WAIT
    );

}

int initialize_MAX() {

}




void SPI_read_thread(void *, void *, void *) {
    // TO DO: log message and toggle LED

}