# Tricopter-Transition-VTOL-Drone

![Perspective View](./Images/VTOL%20Tri-copter%20Perspective%20View.png)
This VTOL (Vertical Take-off and Landing) Tricopter UAV (Unmanned Aerial Vehicle) is fully 3D printed and reinforced with carbon fiber rods. It can transition from vertical flight as a standard tricopter to forward flight as a fixed wing UAV by tilting its front 2 propellers.

***

## Motivation
I was inspired to start this project after seeing the growing usage of standard drones in everyday life. I wanted to combine the efficiency of a fixed wing UAV with the unique ability of a tricopter/quadcopter to hover, which is how I decided on this transition VTOL design.

***

## Specifications
- Length: 650 mm
- Wingspan: 700 mm
- Estimated Weight: 1580 g
- Max Thrust: 3072 g
- Airfoil: HQ 3.0/14

***

## Bill of Materials (BOM)

| Item                                     | Qty | Cost (USD) | Purchase Link                     |
| ---------------------------------------- | --- | --------------- | --------------------------------- |
| 20 × 22 × 330 mm Carbon Fiber Rod        | 1   | $12.89          | [Amazon](https://a.co/d/0fRC7tl8) |
| 10 × 12 × 600 mm Carbon Fiber Rod (2 pc) | 1   | $21.98          | [Amazon](https://a.co/d/04wYlLzz) |
| KM1203MD Servo (2 pc pack)               | 2   | $56.50          | [Amazon](https://a.co/d/04CT49QQ) |
| 3 mm Bushing                             | 2   | $6.97           | [Amazon](https://a.co/d/00eb9Lxp) |
| 5 in. Propeller (20 pc pack)             | 3   | $19.99          | [Amazon](https://a.co/d/0d9hmukg) |
| RS2205 2300 kV Motor (4 pc pack)         | 3   | $36.99          | [Amazon](https://a.co/d/0gNAh0BJ) |
| FS-iA6B Receiver                         | 1   | $17.99          | [Amazon](https://a.co/d/01dz03wv) |
| AERO SELFIE 4-in-1 45A ESC               | 1   | $32.90          | [Amazon](https://a.co/d/0g2pQsMn) |
| MG90S Servo                              | 4   | $13.88          | [Amazon](https://a.co/d/0epTO13h) |
| Teensy 4.0                               | 1   | $24.60          | [Amazon](https://a.co/d/04LAZwGB) |
| MPU6050 9-axis IMU                       | 1   | $6.99           | [Amazon](https://a.co/d/0g5Ldqw0) |
| Ovonic 4S 1300 mAh LiPo Battery          | 1   | $18.99          | [Amazon](https://a.co/d/0c603tkp) |
| 1kg LW-PLA                               | 1   | $24.99          | [Amazon](https://a.co/d/0acjByZF) |
| 1kg PLA                                  | 1   | $11.99          | [Amazon](https://a.co/d/025aT8S4) |
| M3×6 Button Head Screw                   | 8   | $9.99           | [Amazon](https://a.co/d/0h7R8a6U) |
| M3×8 Button Head Screw                   | 6   |                 | Included in M3 hardware kit       |
| M3×14 Button Head Screw                  | 2   |                 | Included in M3 hardware kit       |
| M3 Nut                                   | 2   |                 | Included in M3 hardware kit       |
| M4×16 Socket Head Screw                  | 4   | $8.99           | [Amazon](https://a.co/d/0cEMfsPs) |
| M4×30 Button Head Screw                  | 1   |                 | Included in M4 hardware kit       |
| M4 Nut                                   | 5   |                 | Included in M4 hardware kit       |

Total Cost: $326.63

***

## Assembly Instructions

Coming soon, after I receive funding and build it.
It should be pretty simple, as it mostly consists of gluing together 3D printed parts and screwing in motors and servos.

***

## Software

The current plan is to run custom C++ firmware using a modified version of Drehmflight.
