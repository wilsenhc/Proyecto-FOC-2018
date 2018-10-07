all: main.c
	gcc -O3 main.c -o simplex.exe

clean:
	rm simplex.exe