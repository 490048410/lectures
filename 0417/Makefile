all: hello myhello

hello: hello.o
	g++ hello.o -o hello

hello.o: hello.cpp
	g++ hello.cpp -c

myhello: functions.o main.o
	g++ functions.o main.o -o myhello

functions.o: functions.cpp
	g++ functions.cpp -c


main.o: main.cpp
	g++ main.cpp -c

clean: 
	rm *.o hello myhello
