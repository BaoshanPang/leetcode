CXXFLAGS=-std=c++11 -I../include -I../../googletest/googletest/include/

all: test

test: t1 t2
	echo "Run t1 t2"
t1: 1
	./1
1 : 1.o test.o
	g++ -pthread -lpthread 1.o test.o ../../googletest/googletest/make/gtest_main.a -o 1
1.o : 1.cc

t2: 2
	./2
2 : 2.o test.o
	g++ -pthread -lpthread 2.o test.o ../../googletest/googletest/make/gtest_main.a -o 2
2.o : 2.cc

test.o: test.cc

clean:
	rm -f *.o 1 2 *~
