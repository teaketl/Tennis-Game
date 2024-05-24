all: main.cpp Set.hpp Game.hpp Player.hpp Set.cpp Game.cpp Player.cpp
	g++ -c Player.cpp
	g++ -c Set.cpp
	g++ -c Game.cpp
	g++ -c main.cpp
	g++ main.o Game.o Set.o Player.o -o exec
run: all
	./exec
clean:
	rm *.o
	rm -f exec
