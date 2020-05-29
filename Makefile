CXX = g++
CXXFLAGS = -g3 -Wall -lm
MKDIR = mkdir -p

LIBS = -lm 

directorios:
	$(MKDIR) build dist

main.o: directorios main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o build/main.o

Carrera.o: directorios Carrera.cpp Carrera.h
	$(CXX) $(CXXFLAGS) -c Carrera.cpp -o build/Carrera.o

all: clean main.o Carrera.o
	$(CXX) $(CXXFLAGS) $(LIBS) -o dist/programa build/main.o build/Carrera.o
	rm -fr build

Funciones.o: directorios Funciones.cpp Funciones.h
	$(CXX) $(CXXFLAGS) -c Funciones.cpp -o build/Funciones.o

all: clean main.o Funciones.o
	$(CXX) $(CXXFLAGS) $(LIBS) -o dist/programa build/main.o build/Funciones.o
	rm -fr build

clean:
	rm -fr *.o a.out core programa dist build

.DEFAULT_GOAL := all