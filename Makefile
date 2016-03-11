CXXFLAGS=-std=c++11 -I../include -I../../googletest/googletest/include/ 
LDFLAGS=-pthread -lpthread ../../googletest/googletest/make/gtest_main.a

clean:
	rm -f test.o *.o 001 002 003 004 005 *~ 1 2 3 4 5
