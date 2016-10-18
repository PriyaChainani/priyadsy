try : functions.o main.o
	cc *.o -o project
	clear
functions.o : functions.c
	cc -c functions.c -c
main.o : main.c
	cc -c main.c -c
