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
| 10 × 12 × 600 mm Carbon Fiber Rod (2 pc) | 1   | $16.99          | [Amazon](https://a.co/d/0hknHJLD) |
| KM1203MD Servo (2 pc pack)               | 2   | $56.50          | [Amazon](https://a.co/d/04CT49QQ) |
| 3 mm Bushing                             | 2   | $6.97           | [Amazon](https://a.co/d/00eb9Lxp) |
| 5 in. Propeller (4 pc pack)              | 3   | $9.59           | [Amazon](https://a.co/d/0hknHJLD) |
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

Total Cost: $311.24

***

## Assembly Instructions

MORE DETAILED INSTRUCTIONS WILL COME ONCE BUILD IS COMPLETE.

Nacelles:
1. Screw a CCW motor onto the front motor mount using 4x M3x6mm screws.
2. Screw the tilt servo (not MG90S) into the right nacelle using the provided self-threading screws.
3. Pressfit a 3mm bushing onto the motor mount.
4. Attach the motor mount to the nacelle by pressfitting a servo horn into the indent, and using a M3x8mm screw to connect the bushing side.
5. Run the wires through the tunnel and out the side.
6. Repeat steps 1-5 for the left side (using a CW motor).

Wing:
1. Glue each wing piece in order using CA glue (W1, W2, W3).
2. Glue each aileron piece together.
3. Run a piece of PLA filament through the aileron hole and use that to attach it to the wing.
4. Use hot glue to attach the MG90S servo.

Fuselage:
1. Glue each piece in order using CA glue (F1 in the front, F3 in the back.
2. Glue the two canopy pieces together and set aside.

Tail:
1. Glue the two tail pieces to the middle clamp.
2. Attach the ruddervators to the tail with a piece of PLA filament as the hinge.
3. Use hot glue to install each MG90S servo.

Assembly:
1. Insert the 600mm CF rod into the side of the fuselage.
2. Slide the wings and nacelles into place and secure with CA glue. Make sure to run the wires using the tunnels into the fuselage.
3. Hot glue the 330mm CF rod into the back of the fuselage.
4. Screw on the back motor to its mount, then clamp the mount onto the CF rod.
5. Slide the tail assembly into place and clamp it using M3 screws. Run the servo wires (with extensions) through the CF tube to the fuselage.
6. Use double sided tape and/or velcro to attach the electronics into the compartment inside the fuselage.

***

## Electronics

I plan on using the Drehmflight flight controller, which is based upon using a Teensy 4.0 Microcontroller. The Teensy will receive human inputs from a F-iA6B receiver, and will output PWM and Oneshot125 signals to all 6 servos as well as a 4-in-1 ESC, respectively. The ESC will receive power from a 4s Lipo battery which will power the whole drone, and the ESC will also control the 3 different motors. Finally, the Teensy will receive gyro and accelerometer data from a MPU6050 IMU.

<img width="896" height="484" alt="image" src="https://github.com/user-attachments/assets/228316cc-c49e-4af8-a5cb-403f220007fa" />

Image Credit to Nicholas Rehm: Pinouts on the broken out Teensy 4.0

***

## Software

The current plan is to run custom C++ firmware using a modified version of Drehmflight, made by Nicholas Rehm. The full documentation for Drehmflight can be found here: https://github.com/nickrehm/dRehmFlight/blob/master/dRehmFlight%20VTOL%20Documentation.pdf
