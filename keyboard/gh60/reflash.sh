#! /bin/bash

make clean
make

sudo dfu-programmer atmega32u4 erase --force
sudo dfu-programmer atmega32u4 flash gh60_lufa.hex
sudo dfu-programmer atmega32u4 reset
