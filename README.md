# hp-150-to-ps2-keyboard-adaptor
This project contains code and design files to build an adaptor that lets an HP-150 computer talk to a PS/2 keyboard.

## Purpose
I recently repaired and restored an old HP-150 computer from the brink of death.
After I finally got the video board working again, I realized that I couldn't do anything without a keyboard.
However, these keyboards are not a standard type (HP decided not to go with IBM PC compatibility on this one).
Checking the 'Net, I noticed that these keyboards sold for outrageous prices.
"Why not just adapt a PS/2 keyboard?" I wondered. So I dug into the schematics and wrote an Arduino program to read a PS/2 keyboard and pretend to be an HP-150 keyboard.

## Which computers can use this?
The [HP-150](http://hpmuseum.net/display_item.php?hw=43). It's a nifty little touchscreen computer from 1983.
I'm uncertain if this will work with of HP's other oddball nonstandard computers (possibly other computers in their 100 series).
So... it's a pretty niche project.
If you do use this with another computer, let me know, and I'll add it to this list.

## How do I make one?
First, you'll want to make a PCB. This can be done cheaply via your favorite Chinese PCB manufacturer (as of this writing, mine is [JLCPCB](https://jlcpcb.com/), #NotSponsored).
The Gerber files are already premade for you (in the [Gerber](Gerber) folder in this repository). But if you want to modify the board before manufacture, the design files are in the [Board](Board) folder (I used [KiCad 6](https://www.kicad.org/download/) to create them).

Second, you'll need to assemble the board. I recommend checking the schematics in [Board](Board) to see the exact part values I used. You can get some RJ-12 cables and connectors and PS/2 connectors from Amazon or eBay as well.

Third, you'll need to burn the program to an ATMEGA328p. There are many ways to do this, but I used an ICSP to program via the ICSP header on the board using Arduino 1.8.12

There are a couple of optional steps, too!

First, you can print an enclosure to hold the PCB and protect it from dust and your own clumsiness. I definitely did this.
The files are in [3D Printing](3D Printing), and if you happen to have a Photon Mono X 6K, you can use those *.pwmb files directly. Otherwise, you'll need to use the STL files and do what you do best.
The screws that hold the case together are meant to be M3 screws with brass inserts in the bottom of the case, but you can modify this design to fit whatever you want to do

The second optional step is to print the [keyboard decals](Keyboard Decals.xcf) and affix them to the specialty keys on your PS/2 keyboard (see the [keymap](Keymap.txt) for details on how I set these up by default).
You can always remap these keys by modifying the program (specifically [ps2_to_hp_map.h](Code/PS2_Keyboard_Adaptor/ps2_to_hp_map.h))

## License
This entire project is licensed under the MIT license. Feel free to do whatever with it! If it helps even one person, then it was a good idea for me to upload it to Github.
