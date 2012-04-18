all:cosine

cosine:
	gcc cosinesimilarity.c -Wall -c  `pkg-config --cflags --libs opencv`


