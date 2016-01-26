all: satya

satya: main.o mainsort.o
	gcc main.o mainsort.o -o satya.o

main.o: main.c
	gcc -c main.c

mainsort.o: mainsort.c
	gcc -c mainsort.c
