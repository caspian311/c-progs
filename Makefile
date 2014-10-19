all: prog

fizzbuzz.o: fizzbuzz.c
	gcc -c fizzbuzz.c

prog.o: prog.c
	gcc -c prog.c

prog: prog.o fizzbuzz.o
	gcc prog.o fizzbuzz.o -o prog

clean:
	rm -f *.o prog
