all: clean main.exe

main.exe: list.o main.o
	gcc main.o list.o -o main.exe

main.o: main.c List.h
	gcc -c main.c -o main.o

list.o: List.c List.h
	gcc -c List.c -o list.o

clean:
	del /f list.o main.o main.exe 