# Tricopter-Transition-VTOL-Drone

![Perspective View](./Images/Renders/VTOL%20Tri-copter%20Perspective%20View.png)
This VTOL (Vertical Take-off and Landing) Tricopter UAV (Unmanned Aerial Vehicle) is fully 3D printed and reinforced with carbon fiber rods. It can transition from vertical flight as a standard tricopter to forward flight as a fixed wing UAV by tilting its front 2 propellers.

Demo Link: https://youtube.com/shorts/rxa7jozEfoo?feature=share

***

## Motivation
I was inspired to start this project after seeing the growing usage of standard drones in everyday life. I wanted to combine the efficiency of a fixed wing UAV with the unique ability of a tricopter/quadcopter to hover, which is how I decided on this transition VTOL design.

***

## Specifications
- Length: 650 mm
- Wingspan: 700 mm
- Weight (w/ battery): 870 g
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

## Printing Instructions

- Every part can be printed on a 180x180x180mm print bed.
- For every wing (W) and aileron (A) part, you need to print one version as is, and one mirrored version.
- These following parts should be printed with vase mode using LW-PLA: W1, W2, W3, A1, A3, F1, C1, C2.
- The "Front Plate" part should be printed out of PLA with 0 top/bottom walls, 2 normal walls and 35% honeycomb infill.
- All other parts should be printed using normal PLA with 2 walls and 2-5% gyroid infill.

***

## Assembly Instructions

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

Fuselage and Canopy:
1. Glue each piece in order using CA glue (F1 in the front, F3 in the back.
2. Glue together the canopy pieces (C1, C2, C3).
3. Using CA glue, attach the front latch piece to the front of C1.
4. Glue the Spring Mount near the seam between C2 and C3.
5. Insert a ballpoint pen spring into the mount, then slide L1 and L2 into the slot in C3 before gluing it in place. The latch should move freely front and back.

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

Electronics:
1. Glue the 3 electronics mounts (ESC, Teensy, IMU) into the fuselage.
2. Screw in the ESC using the included M3 screws and rubber grommets.
3. Use VHB to attach the Teensy to its mount, the IMU to its mount, and the receiver to the side of the fuselage.
4. Attach a piece of velcro for the battery somewhere inside F1 so that the position of the battery can be shifted to adjust the center of gravity.
![Build in Progress](./Images/Final%20Build.jpg)
***

## Electronics

The electronics are based around the open-sourced flight controller Drehmflight, which uses a Teensy 4.0 board. There are no PCBs involved and all the components are soldered and wired together.

The schematics are shown below, and can also be viewed in KiCAD.
<img width="2258" height="1552" alt="image" src="https://github.com/user-attachments/assets/91702385-ce12-4d16-bf87-4755d7fc24a2" />


***

## Software

The flight controller runs a modified version of Drehmflight, made by Nicholas Rehm. The full documentation for Drehmflight can be found here: https://github.com/nickrehm/dRehmFlight/blob/master/dRehmFlight%20VTOL%20Documentation.pdf

To compile the firmware, download the source code under the "Firmware" tab, open it in Arduino IDE, then upload to the Teensy 4.0 board over USB.
