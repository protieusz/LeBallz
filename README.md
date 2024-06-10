# LeBallz
LeBallz, a variant of Le-Chiffre that has a 25mm trackball, 34 or 35 key and optional EC11 encoder.

# Mods
-Pcb dxf was extracted from sporkus's case step file. Pcb uses MX and EC11 footprints only. Pcb is powered by RP2040 Core-A instead of STM32. 

-Trackball sensor PMW3360 footprint was added to the pcb.

-Top case modded with a large circle cut out hole for a 25mm trackball holder to be friction fit inserted into it so that the holder sits flush with the pcb with sensor underneath it.  Top case have 2 versions mod: One for MX center and another one the EC11 center. Due to financial restrictions, only the MX version will be tested out. Please print at your own risk.

-Bottom case modded with MCU cut out so that the 3mm mcu doesn't rub the bottom case. None haven't been tested yet. 

-QMK code is copied from aki27's bally and modified by changing the matrix to LeBallz. The rest of the core code remains untouched. No support will be given since I only copy paste. Please ask the original author if help is needed.

# Timeline
June 9, 2024: Gerber sent to JLCPC for print and no pcba service was done. I will self pcba on my own with whatever components I have left. Probably no extra pcba will be done. Case files are sent to the local library for 3DP.

# Fusion360 & EasyEDA Renders:

![Screenshot 2024-06-10 at 8 48 10 AM](https://github.com/protieusz/LeBallz/assets/118025702/f6aacd01-3b04-4b44-97b9-329c6fb0066c)
![Screenshot 2024-06-08 at 10 56 44 PM](https://github.com/protieusz/LeBallz/assets/118025702/fefbf7b6-34a4-45d8-b7fa-9dedd347316e)
![Screenshot 2024-06-09 at 6 13 11 PM](https://github.com/protieusz/LeBallz/assets/118025702/7db2d55c-6dab-41c9-b44f-42f26aa4bfbb)
![Screenshot 2024-06-09 at 6 13 38 PM](https://github.com/protieusz/LeBallz/assets/118025702/b742727d-61f4-4a21-b0a3-cba10b56c080)
![Screenshot 2024-06-09 at 6 14 18 PM](https://github.com/protieusz/LeBallz/assets/118025702/c4a239a4-ebe7-454a-af3b-c67791452a9c)

# License
Since the pcb dxf outline & case file mod were taken from sporkus's Github, hence the my licensing follows his.
