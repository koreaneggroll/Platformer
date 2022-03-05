CC = g++
SRC = ${wildcard ./src/*.cpp}
BUILD = ./build/platformer.o
CFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio

all src/main.cpp:
	${CC} ${SRC} ${CFLAGS} -o ${BUILD}

clean:
	rm ${BUILD}