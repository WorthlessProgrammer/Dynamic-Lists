#!/bin/sh

set -xe

CC=cc
FLAGS="-Wall -Wextra -std=c11"
OUT="-o main"

$CC -c list.c $FLAGS 

$CC main.c $FLAGS -c 

$CC main.o list.o $OUT
