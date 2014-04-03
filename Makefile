CC=gcc -std=c99 -lm

all: cube-digits

cube-digits: cube-digits.c cube-digits.h
	$(CC) -o cube-digits cube-digits.c

test: cube-digits-test.c cube-digits.h
	$(CC) -o cube-digits-test cube-digits-test.c
