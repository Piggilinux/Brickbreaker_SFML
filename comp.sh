#!/bin/bash

g++ -c main.cpp game.cpp block.cpp bricks.cpp player.cpp ball.cpp
g++ main.o game.o block.o bricks.o player.o ball.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
./sfml-app
