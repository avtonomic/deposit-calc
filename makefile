all: func.h func.c main.c
	gcc -Wall -o main func.c main.c