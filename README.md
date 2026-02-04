# UofT Wearable ECG Monitor

This project is part of the **University of Toronto Wearable Team** and focuses on developing a wearable device capable of monitoring **real-time ECG (electrocardiogram) signals**.

The system is designed as a three-stage pipeline, spanning hardware, firmware, and application-level development.

---

## System Overview

1. **ECG Signal Acquisition**  
   The **MAX30001G** ECG analog front-end is used to acquire real-time ECG signals from the user. These signals are digitized and transmitted via **SPI** to the **nRF52840 Development Kit**.

2. **Wireless Data Transmission**  
   The **nRF52840 Bluetooth SoC** receives the ECG data and transmits it wirelessly to an external device using **Bluetooth Low Energy (BLE)**.

3. **Application & Data Visualization**  
   A companion application collects the ECG data over BLE and presents it to users in a clear and intuitive format.

---

## High-Level Project Plan

- Design and validate the hardware schematic  
- Develop firmware for SPI communication and BLE transmission  
- Build an application for data collection and ECG visualization  

---

## Hardware Design

- **Schematic Layout:**  
  *To be added*

---

## References

- *To be added*
