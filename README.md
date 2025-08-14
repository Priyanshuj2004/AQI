# AQI Indicator

An Arduino-based Air Quality Indicator that monitors harmful gases and pollutants in real-time and provides visual alerts using LEDs or other actuators.

## 📌 Features
- Reads air quality data from:
  - **MQ-135** – Detects CO₂, Ammonia, Benzene, Alcohol, Smoke
  - **MQ-9** – Detects Carbon Monoxide and flammable gases
  - **SO₂ Sensor** – Detects Sulfur Dioxide concentration
  - **O₃ Sensor** – Detects Ozone concentration
- Displays readings in **PPM** over the Serial Monitor.
- Triggers **alerts** (LEDs/buzzer) when pollutant levels exceed safe thresholds.

## 🛠️ Components Required
- Arduino Uno (or compatible board)
- MQ-135 Gas Sensor
- MQ-9 Gas Sensor
- SO₂ Sensor
- O₃ Sensor
- 2 LEDs (or buzzer)
- Jumper wires & breadboard
- USB cable for programming

## ⚙️ How It Works
1. The Arduino continuously reads sensor values from analog pins `A0` (MQ-135), `A1` (MQ-9), `A2` (SO₂), and `A3` (O₃).
2. If any pollutant level exceeds:
   - CO ≥ 100 PPM
   - MQ-135 pollutants ≥ 200 PPM
   - SO₂ ≥ 100 PPM
   - O₃ ≥ 90 PPM
   then **Alert LED (Pin 9)** turns ON, and the Safe LED (Pin 10) turns OFF.
3. Otherwise, **Safe LED (Pin 10)** is ON, and Alert LED is OFF.

## 🔧 Circuit Connections
| Sensor       | Arduino Pin |
|--------------|------------|
| MQ-135 (AOUT)| A0         |
| MQ-9 (AOUT)  | A1         |
| SO₂ Sensor   | A2         |
| O₃ Sensor    | A3         |
| Alert LED    | 9          |
| Safe LED     | 10         |

## 🚀 Getting Started
1. Connect the components as per the circuit diagram.
2. Upload the `AQi.ino` file to your Arduino using the Arduino IDE.
3. Open **Serial Monitor** at `9600` baud to view live readings.

