EmojiMaker : main.o
	gcc main.o -o EmojiMaker
main.o : main.c
	gcc -c main.c -std=c99 -g
