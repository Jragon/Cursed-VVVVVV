Cursed-VVVVVV: main.o player.o board.o
	g++ main.o player.o board.o -o Cursed-VVVVVV -lncurses

main.o: main.cpp player.h board.h
	g++ -c main.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

board.o: board.cpp board.h
	g++ -c board.cpp
