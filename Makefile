all:cosine window

cosine:
	gcc cosinesimilarity.c -Wall -c  `pkg-config --cflags --libs opencv`
window:
	gcc window.c -Wall -c `pkg-config --cflags --libs opencv`

clean: 
	rm *.o 
