CC = gcc
FLAGS = -c -Wall -Werror
EXE = bin/deposit-calc

.PHONY: all clean

all: $(EXE)

$(EXE): build/main.o build/deposit.o
	$(CC) build/main.o build/deposit.o -o $@

build/main.o: src/main.c src/deposit.h
	$(CC) $(FLAGS) src/main.c -o $@

build/deposit.o: src/deposit.c src/deposit.h
	$(CC) $(FLAGS) src/deposit.c -o $@

clean:
	rm -f bin/*
	rm -f build/*.o