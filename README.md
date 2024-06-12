# LeBallz
LeBallz, a variant of Le-Chiffre that has a 25mm trackball, 34 or 35 key and optional EC11 encoder.

# Mods
-Pcb dxf was extracted from sporkus's case step file. Pcb uses MX and EC11 footprints only. Pcb is powered by RP2040 Core-A instead of STM32. Pcb done by using EasyEDA.

-Trackball sensor PMW3360 footprint was added to the pcb.

-Top case modded with a large circle cut out hole for a 25mm trackball holder to be friction fit inserted into it so that the holder sits flush with the pcb with sensor underneath it.  Top case have 2 versions mod: One for MX center and another one the EC11 center. Due to financial restrictions, only the MX version will be tested out. Please print at your own risk.

-Bottom case modded with MCU cut out so that the 3mm mcu doesn't rub the bottom case. None haven't been tested yet. 

-QMK code is copied from aki27's bally and modified by changing the matrix to LeBallz. The rest of the core code remains untouched. No support will be given since I only copy paste. Please ask the original author if help is needed.

# Timeline
June 9, 2024: Gerber sent to JLCPC for print and no pcba service was done. I will self pcba on my own with whatever components I have left. Probably no extra pcba will be done. Case files are sent to the local library for 3DP.

Jun 11, 2024: Printed sporkus's case but the trackball holder was a bit tight so I had to use 150 grit sandpaper and sand the circle hole and trackball holder was able to slide in with less friction and adjustable but secure. I have corrected the rectangular case by widening by 3mm on the trackball holder but print at your own risk. I did not do it for the other case. You guys play around trial and error. I haven't printed the corrected 3mm rectangular case yet. Still waiting for the library to print the switch plates first.
JLCPCB progress of pcb is at 71%. Should be ship out by either this week or next week.

# Fusion360 & EasyEDA Renders
![IMG_2244](https://github.com/protieusz/LeBallz/assets/118025702/42c4aa73-408d-433a-ac97-47a8e1af6a5a)
![IMG_2243](https://github.com/protieusz/LeBallz/assets/118025702/5401e376-b00d-4897-a737-7a8136ac5db6)
![IMG_2242](https://github.com/protieusz/LeBallz/assets/118025702/a01eb75d-38c5-4cca-b414-a6beb8a4d8a0)
![IMG_2241](https://github.com/protieusz/LeBallz/assets/118025702/b5c30b8b-36ba-4051-9c3d-cec253db2e3d)
![IMG_2240](https://github.com/protieusz/LeBallz/assets/118025702/1729800e-ab41-4e47-8fb6-a01baa728a15)
![IMG_2239](https://github.com/protieusz/LeBallz/assets/118025702/c58b9b63-9c87-4a1d-8ce5-341c533832f8)

![Screenshot 2024-06-10 at 8 48 10 AM](https://github.com/protieusz/LeBallz/assets/118025702/f6aacd01-3b04-4b44-97b9-329c6fb0066c)
![Screenshot 2024-06-08 at 10 56 44 PM](https://github.com/protieusz/LeBallz/assets/118025702/fefbf7b6-34a4-45d8-b7fa-9dedd347316e)
![Screenshot 2024-06-11 at 7 52 50 AM](https://github.com/protieusz/LeBallz/assets/118025702/74ae45ca-1a68-4be6-8921-fe3ce3759721)
![Screenshot 2024-06-11 at 6 55 36 AM](https://github.com/protieusz/LeBallz/assets/118025702/5648b4f8-aaad-4965-96b8-35772c758ea2)
![Screenshot 2024-06-09 at 6 13 11 PM](https://github.com/protieusz/LeBallz/assets/118025702/7db2d55c-6dab-41c9-b44f-42f26aa4bfbb)
![Screenshot 2024-06-09 at 6 13 38 PM](https://github.com/protieusz/LeBallz/assets/118025702/b742727d-61f4-4a21-b0a3-cba10b56c080)
![Screenshot 2024-06-09 at 6 14 18 PM](https://github.com/protieusz/LeBallz/assets/118025702/c4a239a4-ebe7-454a-af3b-c67791452a9c)

# Credit

Original Le-Chiffre design by https://github.com/tominabox1/Le-Chiffre-Keyboard?tab=readme-ov-file

Case & PCB files modded from sporkus. https://github.com/sporkus/le_chiffre_keyboard_stm32

# License
Since the pcb dxf outline & case file mod were taken from sporkus's Github, hence the licensing follows his.
