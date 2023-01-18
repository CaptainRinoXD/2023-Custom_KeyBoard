# File layout of an QMK firmware
Your keyboard should be located in qmk_firmware/keyboards/ and the folder name should be your keyboard’s name as described in the previous section. Inside this folder should be several files:
* readme.md
* info.json
* config.h
* rules.mk
* <keyboard_name>.c
* <keyboard_name>.h
To make QMK automatic adding these file for you, follow this [instruction](https://docs.qmk.fm/#/cli_commands?id=qmk-new-keyboard):
```
qmk new-keyboard
```
Then just follow the promt to finish creating new keyboard. The new-keyboard gonna be included with _readme.md, info.json, config.h, rules.mk_ and a default folder with _keymap.c_. Your next step is to manually adding _<keyboard_name>.c_ and _<keyboard_name>.h_.
# readme.md
This file is for guest and even for maker to explain his/her firmware, or to documents the journey.
# info.json 
This file is used by the [QMK API](https://github.com/qmk/qmk_api). It contains the information QMK Configurator needs to display a representation of your keyboard. You can also set metadata here. For more information see the [REFERENCE PAGE](https://docs.qmk.fm/#/reference_info_json).
* Seven thing has been listed here have to be in the top line of info.json for QMK:
```
    "manufacturer": "CaptainRinoXD",
    "keyboard_name": "ddn_v1",
    "maintainer": "CaptainRinoXD",
    "bootloader": "stm32-dfu",
	"board": "BLACKPILL_STM32_F411",
    "diode_direction": "COL2ROW",
    "processor": "STM32F411",
```
* Every USB keyboard needs to have its USB parameters defined. At a minimum you need to set the Vendor ID, Product ID, and device version.
```
"usb": {
        "device_version": "1.0.0",
        "pid": "0xDB00",
        "vid": "0xFEED"
```
* matrix_pins can be listed in **info.json** or be defined in **config.h** but cannot be in both
```
    "matrix_pins": {
        "rows": ["B3", "B4"],
        "cols": ["B5", "B6", "B7"]
    }
```
* Layout also need to be refrenced in this file, the format for the layout are:
    - x : **Required**. The absolute position of the key in the horizontal axis, in Key Units.
    - y : **Required**. The absolute position of the key in the vertical axis, in Key Units.