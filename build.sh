#!/bin/bash
set -x

rm blocks.h || true
make
sudo make install
