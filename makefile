
CC = gcc
CFLAGS = -O3 

RUN: ReadFile.o main.c
	$(CC) $(CFLAGS) ReadFile.o main.c -o GA

ReadFile.o: ReadFile.c
	$(CC) $(CFLAGS) ReadFile.c -c

all:
	RUN
