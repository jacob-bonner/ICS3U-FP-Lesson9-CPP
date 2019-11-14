// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program displays metasprites for the GameBoy

#include <gb/gb.h>

// generical character structure: id, position, graphics
struct GameCharacter {
    UBYTE spritids[4]; // all characters use 4 sprites
    UINT8 x;
    UINT8 y;
    UINT8 width;
    UINT8 height;
};
