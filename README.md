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

Jun 30, 2024: LeBallz build completed.

# Full Production Build Pics

![IMG_2384](https://github.com/user-attachments/assets/79e59484-f5ef-4bcc-b3dd-c81d6f130604)
![IMG_2381](https://github.com/user-attachments/assets/7f890135-baf5-4cce-b9e2-5a211826b0c4)
![IMG_2380](https://github.com/user-attachments/assets/cc98f3fb-b4d2-4c63-8a63-0945e9699fb0)
![IMG_2379](https://github.com/user-attachments/assets/92f031bf-58e2-4e5f-8451-5c584a4a4dae)
![IMG_2378](https://github.com/user-attachments/assets/2dbc3ed8-1388-4b49-b3cf-2512abf764b6)
![IMG_2377](https://github.com/user-attachments/assets/9771f5ea-5426-48fb-b3f6-a16f07318ea7)
![IMG_2376](https://github.com/user-attachments/assets/be85c3ef-a9b8-4cac-9706-2f63663e162e)
![IMG_2375](https://github.com/user-attachments/assets/f86178ad-1dfc-4a11-bf1a-022686d2963f)
![IMG_2374](https://github.com/user-attachments/assets/224130a8-1205-41ca-b8e0-662686f25cb1)
![IMG_2373](https://github.com/user-attachments/assets/05df5ff0-2cd2-412b-8f75-8e9208ba11a0)
![IMG_2372](https://github.com/user-attachments/assets/ffd59c6e-9b9f-4236-8c41-4f461bfbfc0b)
![IMG_2371](https://github.com/user-attachments/assets/6ef4962a-8bec-43a3-9642-838006e0cdec)
![IMG_2370](https://github.com/user-attachments/assets/8d8332dc-07bf-4d6b-9da3-05ce0a54ade5)
![IMG_2369](https://github.com/user-attachments/assets/2acdfcc1-919c-4085-a182-a03f0890f984)
![IMG_2368](https://github.com/user-attachments/assets/310b6dcd-2081-4cf2-a9fd-9fd0b60da8d3)
![IMG_2367](https://github.com/user-attachments/assets/53cde843-5af8-4979-8765-6f8283c57d96)
![IMG_2366](https://github.com/user-attachments/assets/69732b53-9138-45d8-b183-1ef71937b7c6)
![IMG_2365](https://github.com/user-attachments/assets/5caba240-687f-4da5-9502-a206499599ba)
![IMG_2364](https://github.com/user-attachments/assets/dd817b54-de5c-4905-8b80-5606230301c1)
![IMG_2363](https://github.com/user-attachments/assets/3b949b60-b129-4683-88da-0e6af6ae4915)
![IMG_2362](https://github.com/user-attachments/assets/262aafdc-c49c-4944-8183-02c6bbc0872f)
![IMG_2361](https://github.com/user-attachments/assets/2b7e70bb-206a-45a0-af3d-d9aee21a17f5)
![IMG_2360](https://github.com/user-attachments/assets/be9f1758-e6d9-4d3e-b58c-da206c6f7adf)
![IMG_2359](https://github.com/user-attachments/assets/a3523d5b-9b04-4fcf-aaeb-b98cd0e1e426)
![IMG_2358](https://github.com/user-attachments/assets/18e8b84b-6cf1-4c56-969a-5077b05ac1a5)
![IMG_2357](https://github.com/user-attachments/assets/0a2c8ded-c305-49ce-9b9e-7f6dd51948bb)
![IMG_2356](https://github.com/user-attachments/assets/e60cd0f3-6c02-4c7a-a1f0-f966096ef6a6)
![IMG_2354](https://github.com/user-attachments/assets/579926b4-c7b1-4153-b764-38ab44b91ecc)
![IMG_2353](https://github.com/user-attachments/assets/5b6b1ff1-3f06-471e-88b8-565458a64bc1)
![IMG_2352](https://github.com/user-attachments/assets/6ce65dde-0f30-494e-b085-c61897a78aff)
![IMG_2351](https://github.com/user-attachments/assets/4f1e43e4-00fe-41c7-9549-9c71f58ab2db)
![IMG_2330](https://github.com/user-attachments/assets/69eb114e-5c27-499a-9849-cad0e4292106)
![IMG_2331](https://github.com/user-attachments/assets/1f4dfb45-0a6f-46ac-a2d2-23471ff58a1f)

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
