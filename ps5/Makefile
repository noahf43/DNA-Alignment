CC = g++
CFLAGS = --std=c++17 -Wall -Werror -pedantic -g
DEPS = ps5.hpp
LIBS =  -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lboost_unit_test_framework

all:EDistance test

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $< $(LIBS)
test:test.o ps5.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
EDistance: ps5.o main.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
clean:
	rm *.o EDistance test
lint:
	cpplint *.cpp *.hpp
	