# Quad Servo Controller


## 🔗 Interactive Simulation

You can explore, test, and run the live interactive electrical simulation of this circuit directly in your browser:

🔗 [Quad Servo Controller - Tinkercad](https://www.tinkercad.com/things/iF5nxvOmeCO-quad-servo-controller)

---

## 🖼️ Hardware Connection & Circuit Diagram

Here is the fully engineered circuitry wiring diagram for the 4-servo control system:

<img width="1920" height="1080" alt="لقطة شاشة 2026-07-14 233115" src="https://github.com/user-attachments/assets/afc0e427-d155-461e-a90d-b593ce6209cb" />

---

## 📹 Project Demonstration Video

> 📝 Note: The demonstration video file has been successfully uploaded directly to the repository's files section above.

You can play the video directly from the files list (`275430282556737567.mp4`), or watch the live action demonstration below showing the smooth 2-second sweep and the automatic locking phase:

<p align="center">
  <video src="./275430282556737567.mp4" width="700px" autoplay loop muted controls></video>
</p>

---

## 📋 System Requirements & Technical Logic

The firmware controls the execution behavior of the four servo motors simultaneously according to the following strict sequencing parameters:

1. Dynamic Sweep Phase (First 2 Seconds): All motors execute a continuous synchronous sweep routine spanning from $0^\circ$ to $180^\circ$ and back to $0^\circ$.
2. Stationary Locking Phase: Immediately after the 2-second threshold, the system clock loop locks all four motors firmly at a 90-degree hold position.

---

## 🎨 Pin Hardware Configurations

The components are integrated onto a centralized breadboard power bus utilizing the following Arduino PWM pin mappings to eliminate signal interference (configured specifically for this build):

| Hardware Module | Micro-controller Map | Primary Operational Role |
| :--- | :--- | :--- |
| Servo Motor 1 | Digital Pin 9 (PWM) | Dynamic Angle Rotation & Locking |
| Servo Motor 2 | Digital Pin 6 (PWM) | Dynamic Angle Rotation & Locking |
| Servo Motor 3 | Digital Pin 5 (PWM) | Dynamic Angle Rotation & Locking |
| Servo Motor 4 | Digital Pin 3 (PWM) | Dynamic Angle Rotation & Locking |


