# SGX-VOX_amplifier_board

This repo contains 3 folders:
1. called "Oxygen sensor PCB V1.21" which contains the PCB manufacture files
2. called "Oxygen_sensor_amp_PCB_SGX-VOX_Darren_Lewis" which contains the Arduino code
3. called "SGX-VOX oxygen sensor datasheets" which contains datasheets for the SGX-VOX oxygen sensor

JLC PCB is a great site for getting boards made cheaply.

This breakout board and Arduino code can be used for amplifying the output signal from the SGX-VOX oxygen sensor with 50x gain to allow the sensor to be easily used with an Arduino or similar microcontroller, or even just using a standard volt-meter. The voltage output from the SGX-VOX is very low, around 9mV - 62mV across the whole range from 21% oxygen to 100% oxygen. The voltage scales linearly with oxygen concentration.

An Instructables guide showing step by step how to build and use this project can be found in the following link: https://www.instructables.com/PCB-Gain-Circuit-for-SGX-VOX-Electrochemical-Oxyge/
