# SOIL_MOISTURE_MONITOR_ARDUINO_UNO
To continuously monitor the soil moisture level using a sensor, display real-time readings on a 16x2 I2C LCD, and provide visual (LED) and audio (buzzer) alerts based on moisture conditions: LOW, MODERATE, or HIGH.
# 🌱 Soil Moisture Monitoring System (Arduino UNO)

## Overview
This project implements a soil moisture detection and alert system using Arduino UNO and a soil moisture sensor. It helps monitor soil hydration levels in real time, making it ideal for smart agriculture, gardening, and environmental automation. The repository includes source code, documentation, pin mapping, and circuit visuals for easy replication and understanding.

## Tech Stack
- Arduino UNO (`soil_Moisture_monitoring_System.info`)
- Soil moisture sensor
- LED or buzzer for alert output
- Excel for pin configuration
- Word documentation for system overview

## Files Included
- `soil_Moisture_monitoring_System.info`: Arduino sketch for soil moisture detection and alert logic
- `Soil_Moisture_Monitoring_System.docx`: Detailed documentation of system design and operation
- `SOIL_MOISTURE_MONITORING_PIN_OUTS.xlsx`: Pin configuration and hardware mapping
- `Soil_moisture_monitoring.jpg`: Photo of the physical setup
- `circuit_image(16).png`: Circuit diagram
- `README.md`: Project overview and instructions

## Highlights
- Real-time soil moisture monitoring using analog sensors
- Threshold-based alert system for dry soil conditions
- Modular code structure for easy adaptation to other platforms
- Clear documentation and pin mapping for reproducibility
- Visual assets for hardware setup and circuit layout

## How It Works
- The soil moisture sensor measures the water content in the soil
- Arduino reads the analog signal and compares it against a threshold
- If moisture is low, an alert is triggered via LED or buzzer
- Circuit and pin mapping ensure accurate signal flow and control

## Author
**Manohar** – Embedded Systems Enthusiast  
📫 [GitHub Profile](https://github.com/manohar146)
