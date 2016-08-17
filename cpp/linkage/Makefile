CC = g++
CFLAGS = -g -Wall

ALL: main.o sub.o
	$(CC) $(CFLAGS) -o out main.o sub.o

main.o: Extern2.cpp
	$(CC) $(CFLAGS) -o main.o -c Extern2.cpp

sub.o: Extern1.cpp
	$(CC) $(CFLAGS) -o sub.o -c Extern1.cpp
