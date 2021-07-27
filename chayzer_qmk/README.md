# artsey

artsey.io implementation for the Chayzer keyboard.

How to set up the code:
* Install QMK for your system and test run making a .hex file for a board.
-- https://beta.docs.qmk.fm/tutorial/newbs_getting_started
* Get the source and move it to where your current QMK setup is. (you might not have to do this if your install is up to date)
```
git clone https://github.com/qmk/qmk_firmware
```
* Merge with combo (from the qmk_firmware root directory for your installation)
```
git remote add sevanteri_early_combo https://github.com/sevanteri/qmk_firmware.git
git fetch sevanteri_early_combo
git checkout -b mod-tap-combos sevanteri_early_combo/early_combo
git pull sevanteri_early_combo early_combo
```

* Make submodules (lufa error)
```
make git-submodule
```
* Copy all of the files from https://github.com/artseyio/artsey-qmk/tree/main/left_hand (except for the keymaps directory and files inside) to the chayzer directory (not to the chayzer/keymaps directory)
* The final directory will look like:
```
├── keymaps
|   ├── artsey_left
|       ├── keymap.c     [chayzer original file]
|       ├── oled.c       [chayzer original]
├── artsey.c             [artsey original file ]
├── artsey.h             [artsey original]
├── artsey_basic.def     [artsey]
├── artsey_combos.csv    [artsey]
├── artsey_keycodes.csv  [artsey]
├── chayzer.c            [chayzer]
├── chayzer.h            [chayzer]
├── combos.def           [artsey]
├── config.h             [chayzer]
├── generator.R          [artsey]
├── info.json            [chayzer]
├── keymap_combo.h       [artsey]
├── macros.c             [artsey]
├── readme.md            [chayzer]
├── rules.mk             [chayzer]
```
* Copy the chayzer keyboard directory to qmk_firmware/keyboards
* Make the keyboard
```
make chayzer:artsey_left
```


![chayzer](https://radiohands.com/chayzer/chayzer.jpg)
