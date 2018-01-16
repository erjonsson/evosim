
COMPILER      = g++
OPTIONS       =  -std=c++11 -pedantic-errors -Wall -Wall -Werror -Wextra -c
LINKER_OPT    = -L/usr/lib -lstdc++ -lm
INCLUDE       = -Itpl/bitmap/

all: evosim	

evosim : main.o world.o organism.o
	$(COMPILER) -o evosim main.o simulator.o world.o organism.o  $(LINKER_OPT)

main.o : main.cpp world.h organism.h
	$(COMPILER) $(OPTIONS) main.cpp
simulator.o : simulator.cpp simulator.h
	$(COMPILER) $(OPTIONS) simulator.cpp
world.o : world.cpp world.h bitmap_image.hpp
	$(COMPILER) $(OPTIONS) world.cpp $(INCLUDE)
organism.o : organism.cpp organism.h
	$(COMPILER) $(OPTIONS) organism.cpp

clean :
	rm evosim main.o world.o organism.o simulator.o