CXXFLAGS=-std=c++11 -I../include -I../../googletest/googletest/include/

all: test

test: t001 t2
	echo "Run 001 t2"
t001: 001
	./001
001 : 001.o test.o
	g++ -pthread -lpthread 001.o test.o ../../googletest/googletest/make/gtest_main.a -o 001
001.o : 001.cc

t2: 2
	./2
2 : 2.o test.o
	g++ -pthread -lpthread 2.o test.o ../../googletest/googletest/make/gtest_main.a -o 2
2.o : 2.cc

test.o: test.cc

clean:
	rm -f *.o 001 2 *~
