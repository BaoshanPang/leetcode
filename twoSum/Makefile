CXXFLAGS=-std=c++11 -I../include -I../../googletest/googletest/include/

all: test

test: 1
	./1
1 : 1.o test.o
	g++ -pthread -lpthread 1.o test.o ../../googletest/googletest/make/gtest_main.a -o 1
1.o : 1.cc
test.o: test.cc

clean:
	rm -f *.o 1 *~
