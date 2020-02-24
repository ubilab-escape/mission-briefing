# Mission Briefing
The mission briefing provides the team members with the information they need to know before starting the game. It lets them understand the goal they need to achieve without giving too much details. The mission briefing device should self-destruct after the briefing is finished.

## Device Description
The device consists of a smartphone (Nexus 5) mounted on a smoke generator. An android app is used to play the briefing clip automatically once the app is started. At the end of the briefing clip, the app turns on the flash light of the smartphone camera in order to trigger the smoke generator. 

The smoke generator consists of an e-cigarette to which a small pump is attached. An LDR is used in order to detect the flash light. The signal from the LDR is detected using an Arduino nano microcontroller. The microcontroller turns on the e-cigarette for 10 seconds using a relay once the LDR is triggered.

## CAD Design
The smoke generator, shown in the figure below, was designed using FreeCAD software. It features an internal cavity that keeps the smoke away from the electronic circuitry. The smoke enters the cavity at the inlet and gets out from several slots placed around the smartphone at the surface.

![CAD Image](https://github.com/ubilab-escape/mission-briefing/blob/master/CAD/Images/0.png)

## Mission Briefing Clip
The mission briefing clip was implemented in Adobe After-Effect. A Cloud-Based text-to-speach (TTS) Api was used for presenting the mission. The TTS API can be found at: https://ttsdemo.com

## Android App
In order to automatically play the clip on the smartphone and trigger the flash light at the end, an app was required. The app was implemented in MIT App Inventor. App Inventor is a web-application integrated development environment which is very easy for beginners.

![App Image](https://github.com/ubilab-escape/mission-briefing/blob/master/Android%20App/UBI.png)

## Electronics 
- MCU: Arduino Nano 
- LDR: 2mm LDR (non-RoHS)
- Reed Relay: Schneider Electric 117SIP-6 
- Resistor: 10K 
- Mini Pump: YYP031-3A1
- E-cigarette: CE-4
- Mini Breadboard
- Batteries : 9V and 4.5V (x3 1.5V)

![Circuit Image](https://github.com/ubilab-escape/mission-briefing/blob/master/Circuit.PNG)
