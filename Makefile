CXXFLAGS=-std=c++11 -I../include -I../../googletest/googletest/include/ 
LDFLAGS=-pthread -lpthread test.o ../../googletest/googletest/make/gtest_main.a

.PHONY: dummy
dummy: test.o

-include dummy

clean:
	rm -f test.o *.o 001 002 003 004 005 *~ 1 2 3 4 5
