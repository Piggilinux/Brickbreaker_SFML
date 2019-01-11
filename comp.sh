#!/bin/bash

g++ -c main.cpp game.cpp block.cpp player.cpp
g++ main.o game.o block.o player.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
./sfml-app
