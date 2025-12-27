# 💡 IoT-Based Automatic Light Control System

This project automates lighting using **IR** and **LDR** sensors to detect motion and ambient light levels. The system turns the LED **ON only when it’s dark and motion is detected**, ensuring efficient energy use. It demonstrates how simple IoT principles and sensor integration can create practical smart-home applications.

---

## ⚙️ Features

- Automatic LED control based on **motion** and **light intensity**
- Real-time detection and response using **IR** and **LDR** sensors  
- Beginner-friendly design  

---

## 🧰 Hardware Used

- **IR Sensor (PIR)** – Detects motion  
- **LDR Sensor** – Detects ambient light level  
- **LED** – Output indicator  
- **Microcontroller** – ESP32 / NodeMCU / Arduino  

---

## 🧾 Code Overview

The main logic is implemented in [`project_code.ino`](./project_code.ino):

The LED turns ON only if both conditions are true.

Serial Monitor logs the system status for debugging and testing.

🔌 Connections
Detailed pin connections are listed in [`connections`](./connections):

👥 Team  
Developed collaboratively by  
ALVIN SAJU  
BASIL PETER  
GOVIND JAYAPAL  
JOYAL  
NANDAGOPAL  
