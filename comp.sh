#!/bin/bash

  g++ -c main.cpp game.cpp block.cpp bricks.cpp player.cpp ball.cpp
#clang++ -std=c++11 -lsfml-window -lsfml-graphics -lsfml-system -o test main.o game.o block.o bricks.o player.o ball.o
g++ main.o game.o block.o bricks.o player.o ball.o -o brickbreaker -lsfml-graphics -lsfml-window -lsfml-system
./brickbreaker
#./test
#  clang++ -std=c++11 -lsfml-window -lsfml-graphics -lsfml-system -o test main.o game.o block.o bricks.o player.o ball.o
