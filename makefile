all:
	g++ -std=c++17 main.cpp -o main
	./main 10
clean:
	rm main