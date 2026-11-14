# Simple Calculator

A simple command-line calculator written in C.

## Description

The program prints a welcome line, displays a menu of operations
(add, subtract, multiply, divide) and lets the user quit with option 0.

## Compilation

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 calculator.c -o calculator

## Usage

./calculator

## Author

Sara

## Number type

The calculator uses decimal numbers (double). Results are printed
with %g, so 10 / 4 gives 2.5 and 10 + 25 gives 35.
Division by zero prints "Error: division by zero".
