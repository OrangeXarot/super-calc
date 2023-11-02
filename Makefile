all: main

test: main 
	./calc

main: main.c
	gcc -o calc main.c

clean:
	rm calc
