# Intruder Alert System (ESP32)

A simple intruder detection system using:
- ESP32
- IR sensor (digital)
- Active buzzer (low-level trigger)
- LED + resistor

## How it works
The IR sensor outputs LOW when an object is detected.  
The ESP32 reads this value on pin D15 and triggers:
- Buzzer on pin D4
- LED on pin D18

## Wiring summary
- IR VCC → 3.3V  
- IR GND → GND  
- IR OUT → D15  
- Buzzer VCC → 3.3V  
- Buzzer GND → GND  
- Buzzer I/O → D4  
- LED– → GND  
- LED+ → resistor → D18  

## Upload
Use Arduino IDE with ESP32 board support.  
Select correct COM port, upload, and enjoy the chaos.
