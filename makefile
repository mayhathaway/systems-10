all: main.o cities.o
	gcc -o main main.o cities.o

main.o: main.c cities.h
	gcc -c main.c

cities.o: cities.c cities.h
	gcc -c cities.c

run: main
	./main

clean:
	rm *.o
