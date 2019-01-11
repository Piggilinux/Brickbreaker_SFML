#!/bin/bash

g++ -c main.cpp game.cpp block.cpp
g++ main.o game.o block.o  -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
./sfml-app
