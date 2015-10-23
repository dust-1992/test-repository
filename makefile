all: low.o lowcase.o
	cc -o low low.o lowcase.o

low.o: low.c
	cc -c low.c lowcase.h
lowcase.o: lowcase.c
	cc -c lowcase.c lowcase.h


clean: 
	rm *. o
	rm low
