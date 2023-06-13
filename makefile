app: main.o calculator.o
	g++ -o app main.o calculator.o

main.o: ./src/main.cpp ./headers/calculator.h
	g++ -c ./src/main.cpp

calculator.o: ./src/calculator.cpp ./headers/calculator.h
	g++ -c ./src/calculator.cpp
