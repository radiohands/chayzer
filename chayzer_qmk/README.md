# artsey

artsey.io implementation for the Chayzer keyboard.

How to set up the code:
* Get the source
```
git clone https://github.com/qmk/qmk_firmware
```
* Merge with combo
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

* Copy the chayzer keyboard directory to qmk_firmware/keyboards
* Make the keyboard
```
make chayzer:artsey_left
```


![chayzer](https://radiohands.com/chayzer/chayzer.jpg)
