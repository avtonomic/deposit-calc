CC = gcc
FLAGS = -c -Wall -Werror
FLAGS_1 = -I thirdparty -I src -c
EXE = bin/deposit-calc
EXE_TEST = bin/deposit-calc-test

.PHONY: all clean

all: $(EXE) $(EXE_TEST)

$(EXE): build/src/main.o build/src/deposit.o
	$(CC) build/src/main.o build/src/deposit.o -o $@

build/src/main.o: src/main.c
	$(CC) $(FLAGS) src/main.c -o $@

build/src/deposit.o: src/deposit.c
	$(CC) $(FLAGS) src/deposit.c -o $@

$(EXE_TEST): build/test/deposit_test.o build/test/validation_test.o build/test/main.o build/src/deposit.o
		$(CC) build/test/deposit_test.o build/test/validation_test.o build/test/main.o build/src/deposit.o -o $@

build/test/deposit_test.o: test/deposit_test.c       
		$(CC) $(FLAGS_1) test/deposit_test.c -o $@   

build/test/validation_test.o: test/validation_test.c   
		$(CC) $(FLAGS_1) test/validation_test.c -o $@

build/test/main.o: test/main.c 
		$(CC) -I thirdparty -c test/main.c -o $@

clean:
	rm -f bin/*
	rm -f build/src/*.o
	rm -f build/test/*.o