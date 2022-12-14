CXXFLAGS = -Wall -g

all: main.o funcs.o
	g++ -o main main.o funcs.o

main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

main.o: main.cpp
funcs.o: funcs.cpp funcs.h
tests.o: tests.cpp doctest.h

clean:
	rm -f main.o funcs.o tests.o