# Tank Overflow detector



![Tank Overflow detector](screenshot.webp)


> Built in [Breadboard](https://breadboard.hackclub.com), a Hack Club program. This project took ~2.1 hours of work.



## What It Does

It will detect the tanks overflow and activate the buzzer.


## How It Works

The circuit is captured in `breadboard-project.json`, and the firmware that runs it is in the `firmware/` folder.


## How To Use It

Connections
1. Buzzer ->
+ -> D12
- -> GND
2. Water level sensor
+ -> 5V
- -> GND 
S -> A0
3. RGB Led
R->D6
G-> D5
B-> D3
- -> GND
4. Connect the LCD Pins to respective pins on I2C Connector
and then you will get 4 Pins as follows:
VCC->5V
GND->GND
SDA->A4
SCL->A5

Upload the code in the firmware 
and it should work now

Note:- You may adjust the threshold as per your requirements


## Demo

- **Simulate it live:** [https://breadboard.hackclub.com/share/166](https://breadboard.hackclub.com/share/166), runs the firmware in the Breadboard simulator
- **View the design:** [https://taniwankenobi.github.io/breadboard-plays/p/166/](https://taniwankenobi.github.io/breadboard-plays/p/166/)


## Schematic

The editor snapshot is in `breadboard-project.json`.


## Bill of Materials

| Part | Quantity |
| --- | --- |
| buzzer-active | 1 |
| lcd1602 | 1 |
| lcd1602-i2c | 1 |
| remote-led-module | 1 |
| water-level-sensor | 1 |


## Firmware

Firmware files are in the `firmware/` folder.


## Build Journal

Build journal entries are kept in [`journals.md`](journals.md).


---



*Made in [Breadboard](https://breadboard.hackclub.com) — 2.1h of work*



<p align="center"><img src="https://cdn.hackclub.com/019efae7-6857-75a2-8bc1-2618087b4eae/a%20bred%20tanuki%20(3).png" width="64" alt="Breadboard mascot" /></p>