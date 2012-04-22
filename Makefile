all:cosine window

cosine:
	gcc cosinesimilarity.c -Wall -c -o ./bin/cosinesimilarity.o  `pkg-config --cflags --libs opencv`
window:
	gcc window.c -Wall -c -o ./bin/window.o `pkg-config --cflags --libs opencv`

clean: 
	rm -rf ./bin
	mkdir ./bin
