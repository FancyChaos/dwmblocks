#!/bin/bash
set -x

rm blocks.h || true
make
sudo make install
mkdir -p ~/.local/bin/statusbar/ || true
cp statusbar/* ~/.local/bin/statusbar/
sudo chmod +x ~/.local/bin/statusbar/*
