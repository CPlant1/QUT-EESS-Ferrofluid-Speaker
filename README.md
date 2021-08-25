# QUT-EESS-Ferrofluid-Speaker
A repository for code and files for the ferrofluid speaker built by the members of EESS.

# Overview
This project involves building a working ferrofluid display that will “dance” to music (almost like a controllable lava lamp). Ferrofluid is a magnetic fluid that can be moved and controlled by electromagnets. This is a complex, semester-long project and therefore the project does not have a clear path forward. This is an unstructured project where the team will collaborate on research, design and construction of the device.

# Current plan
Music, played from a phone, is transmitted to the ESP32 microcontroller via bluetooth. The audio signal will be played by a speaker. This audio signal is also to be filtered by an MSGEQ7 and processed by a microcontroller. This will allow us to filter off the bass/midrange etc.  
After filtering, the signal will be sampled by the microcontroller. The microcontroller will then decide which of the electromagnets to turn on/off.
Power will be provided by a 5V power supply. 

![Rough Architecture](/images/Rough_Architecture.png)

# Tasks
Assist the project manager (Corey) to deliver the project by taking on one or more of the tasks outlined below. EESS will support you every week but you may also choose to work with a friend. There are no project deadlines, just EESS members learning to build an impressive project together. If work/study/life gets in the way, that's all good, don't stress out about it!

It's an unstructured project so this is not an exhaustive list. This is just a good starting point.
* Container
    * Chemical treatment of ferrofluid container
    * Add ferrofluid and host liquid to container
* Power
    * Create transistor/MOSFET circuit for electromagnets
    * Create gate driver circuit to turn on and off transistors/MOSFETs
    * Set up potentiometer to select different amounts of power for the electromagnets 
    * Wire up components to 5V 3A power supply
* Audio signal
    * Set up speakers
    * Set up spectrum filter circuit
    * Install potentiometer or switches to choose frequency range
* Microcontroller
    * Set up ESP32 as bluetooth audio receiver
    * Sample filtered audio 
    * Turn off and on electromagnets to make ferrofluid dance

# Specially Ordered Equipment
The following equipment has been ordered and delivered for use in this project
* ESP32-DEVKITC-32D
* 5V ELECTROMAGNET 5KG HOLDING FORCE
* Magnetic Liquid Ferrofluid EFH1 - 30mL
* 5V DC 3A Slim Power Supply 7DC Plugs
* MSGEQ - IC AUDIO TONE PROCESSOR 8DIP
* Arduino Compatible 8 x 8 LED Dot Matrix Module

We are planning on ordering the following equipment
* Audio IC Development Tools SparkFun I2S Audio Breakout - MAX98357A

# Current Progress
* Completed design of electromagnet driver circuit
* Began working with ESP32 and Arduino IDE - uploaded LED blink program
* Project research is ongoing
