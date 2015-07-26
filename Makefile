# Sources
SRCS = main.c csv_writer.c

# Project name
PROJ_NAME=main
OUTPATH=build

BINPATH=/usr/bin
CC=gcc

CFLAGS  = -std=gnu99 -g -O2 -Wall 

vpath %.c src
vpath %.a lib

ROOT=$(shell pwd)

# custom libraries
CFLAGS += -Ilib 

OBJS = $(SRCS:.c=.o)

###################################################

all: lib proj

lib:
	$(MAKE) -C lib 

proj: 	$(OUTPATH)/$(PROJ_NAME).out

$(OUTPATH)/$(PROJ_NAME).out: $(SRCS)
	$(CC)  $(CFLAGS) $^ -o $@ 

clean:
	rm -rf build/*
