all: main.cpp 
	g++ main.cpp -o maze_runner -lncurses
clean:
	rm maze_runner
