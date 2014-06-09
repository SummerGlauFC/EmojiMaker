NAME=EmojiMaker
CFLAGS=-g -std=c99 -Wall -o $(NAME)
GTKFLAGS=`pkg-config --cflags --libs gtk+-3.0`
SRCS=main.c
CC=gcc

all : main

main : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(GTKFLAGS)
#EmojiMaker : main.o
#	gcc `pkg-config --cflags gtk+-3.0` main.o -o EmojiMaker
#main.o : main.c
#	gcc -c `pkg-config --libs gtk+-3.0` main.c   -g
