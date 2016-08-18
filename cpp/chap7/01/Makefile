CC = g++

ave: Average.cpp InputStream.o
	$(CC) -o ave InputStream.o Average.cpp

InputStream.o: InputStream.cpp Stream.o
	$(CC) -o InputStream.o Stream.o -c InputStream.cpp

Stream.o: Stream.cpp
	$(CC) -o Stream.o -c Stream.cpp
