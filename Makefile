CC = g++ -std=c++17 -g

all: lightsError numChecker microservice 

lightsError: lightsError.cpp
	$(CC) lightsError.cpp -o lightsError

numChecker: numChecker.cpp
	$(CC) numChecker.cpp -o numChecker

microservice: microservice.cpp
	$(CC) microservice.cpp -o microservice

clean:
	rm -f main