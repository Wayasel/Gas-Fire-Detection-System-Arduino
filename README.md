# 🔥 Gas & Fire Detection System Using Arduino
A simple and reliable Arduino-based safety system that detects **gas leakage** and **fire** and triggers a buzzer alarm for early warning.

## 📌 Features
- Gas leakage detection using analog gas sensor
- Fire detection using digital flame sensor
- Buzzer alert system
- Serial Monitor output for real-time monitoring
- Easy to calibrate and extend

## 🛠️ Hardware Components
- Arduino Uno / Nano
- Gas Sensor (MQ series recommended)
- Fire / Flame Sensor Module
- Buzzer
- Jumper wires
- Breadboard


## 🔌 Pin Configuration

| Component     | Arduino Pin |
|---------------|-------------|
| Gas Sensor    | A0          |
| Fire Sensor   | D2          |
| Buzzer        | D8          |

## ⚙️ How It Works
- The gas sensor continuously sends analog values.
- If the gas value exceeds the defined threshold, the buzzer turns ON.
- The fire sensor outputs **LOW** when fire is detected.
- If **either gas or fire** is detected, the alarm activates.

## 📄 Source Code
The main Arduino sketch is located in:

