NAME=EmojiMaker
CFLAGS=-g -std=c99 -Wall -o $(NAME)
GTKFLAGS=`pkg-config --cflags --libs gtk+-3.0`
SRCS=main.c
CC=gcc

all : main

main : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(GTKFLAGS)

