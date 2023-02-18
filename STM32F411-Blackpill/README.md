# File layout of an QMK firmware
Your keyboard should be located in qmk_firmware/keyboards/ and the folder name should be your keyboard’s name as described in the previous section. Inside this folder should be several files:
* readme.md
* info.json
* config.h
* rules.mk
* <keyboard_name>.c
* <keyboard_name>.h  
To make QMK automatically adding these file for you, follow this [instruction](https://docs.qmk.fm/#/cli_commands?id=qmk-new-keyboard):
```
qmk new-keyboard
```
Then just follow the promt to finish creating new keyboard. The new-keyboard gonna be included with `readme.md`, `info.json`, `config.h`, `rules.mk` and a default folder with `keymap.c`. Your next step is to manually adding `<keyboard_name>.c` and `<keyboard_name>.h`.
# readme.md
This file is for guest and even for maker to explain his/her firmware, or to documents the journey.

# info.json 
This file is used by the [QMK API](https://github.com/qmk/qmk_api). It contains the information QMK Configurator needs to display a representation of your keyboard. You can also set metadata here. For more information see the [REFERENCE PAGE](https://docs.qmk.fm/#/reference_info_json).
* Seven thing has been listed here have to be in the top line of info.json for QMK:
```json
    "manufacturer": "CaptainRinoXD",
    "keyboard_name": "ddn_v1",
    "maintainer": "CaptainRinoXD",
    "bootloader": "stm32-dfu",
	"board": "BLACKPILL_STM32_F411",
    "diode_direction": "COL2ROW",
    "processor": "STM32F411",
```
* Every USB keyboard needs to have its USB parameters defined. At a minimum you need to set the Vendor ID, Product ID, and device version.
```json
"usb": {
        "device_version": "1.0.0",
        "pid": "0xDB00",
        "vid": "0xFEED"
},
```
* matrix_pins can be listed in **info.json** or be defined in **config.h** but `cannot be in both`
```json
"matrix_pins": {
        "rows": ["B3", "B4"],
        "cols": ["B5", "B6", "B7"]
},
```
* Layout also need to be refrenced in this file, the format for the layout are:
    - x : **Required**. The absolute position of the key in the horizontal axis, in Key Units.
    - y : **Required**. The absolute position of the key in the vertical axis, in Key Units.
```json
"layouts": {
    "LAYOUT": {
        "layout": [
            {"label":"1", "x":0, "y":0}, 
            {"label":"2", "x":0, "y":1}, 
            {"label":"3", "x":1, "y":0}, 
            {"label":"4", "x":1, "y":1}, 
            {"label":"5", "x":2, "y":1}
        ]
    }
}
```

# config.h
In the newer version of QMK, most of the important stuff have been listed in `info.json`. Most docs can be found here: [The_config.h_File](https://docs.qmk.fm/#/config_options?id=the-configh-file)
* Most be included: 
```h
#include "config_common.h"
#define MATRIX_ROWS 2
#define MATRIX_COLS 3
```

# rule.mk
When you use the `qmk new-keyboard` in qmk mysys, the `rule.mk` will be automatically be added for you based on what you tell the programs. More information can be found [The_rules.mk_File](https://docs.qmk.fm/#/config_options?id=the-rulesmk-file).

##


