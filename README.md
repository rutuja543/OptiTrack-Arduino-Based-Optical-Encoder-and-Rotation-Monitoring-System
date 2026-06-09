# OptiTrack: Arduino-Based Optical Encoder and Rotation Monitoring System

## Overview

OptiTrack is an Arduino-based optical encoder system developed for real-time rotation monitoring and pulse counting applications. The system utilizes an infrared (IR) sensor and a slotted encoder wheel to detect rotational movement, count encoder pulses, and determine the number of completed wheel rotations.

A 16×2 I2C LCD is used to display slot count and rotation count in real time, providing a simple and effective demonstration of optical encoder principles used in industrial automation, robotics, and motion control systems.

---

## Features

* Real-time slot detection using IR sensing
* Rotation counting using encoder wheel pulses
* LCD-based monitoring interface
* LED indication for completed rotations
* Low-cost and easy-to-implement design
* Suitable for educational and industrial demonstrations

---

## Hardware Components

* Arduino Uno
* IR Sensor Module
* 16×2 I2C LCD Display
* Encoder Wheel (16 Slots)
* DC Geared Motor
* LED Indicator
* Breadboard
* Jumper Wires
* External Power Supply

---

## Working Principle

The encoder wheel consists of 16 equally spaced slots. As the wheel rotates, the IR sensor detects each slot and generates a digital pulse. The Arduino continuously monitors these pulses and performs the following operations:

1. Detects individual slot transitions.
2. Counts the number of slots passing through the sensor.
3. Calculates completed rotations.
4. Displays slot count and rotation count on the LCD.
5. Activates an LED indicator after a complete wheel rotation.

Mathematically:

Rotation Count = Total Slot Count ÷ 16

---

## System Architecture

Encoder Wheel → IR Sensor → Arduino Uno → LCD Display

```
                                  ↓

                             LED Indicator
```

---

## Applications

* Industrial Automation
* Robotics and Motion Control
* Conveyor Monitoring Systems
* Shaft Position Tracking
* Speed Measurement Systems
* Educational Demonstration Kits
* Embedded Systems Learning

---

## Project Outcomes

* Successful implementation of optical pulse detection.
* Real-time slot and rotation counting.
* LCD-based visualization of encoder data.
* Demonstration of industrial encoder concepts using low-cost hardware.

---

## Future Enhancements

* RPM Measurement
* Wireless Monitoring using ESP32
* Data Logging
* Mobile Application Integration
* Direction Detection (Clockwise/Counter-Clockwise)
* IoT-Based Monitoring Dashboard


