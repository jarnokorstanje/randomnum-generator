# run "make" or "make main" to compile the main
# run "clean" to revert changes in folder
.RECIPEPREFIX +=    # secure tab character for recipe prefix in case of spaces

HEADERS = $(wildcard *.h)                           # get and list all files with a .h extension
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))     # get all files with a .c extension to convert to .o
CFLAGS = -Wall              # add all wanted compiler flags

.PHONY: default main clean  # prevent conflicts with future files called like the existing make commands

default: main

%.o: %.c $(HEADERS)
    gcc $(CFLAGS) -c $< -o $@

main: $(OBJECTS)
    gcc $(OBJECTS) $(CFLAGS) -o $@

clean:
    -rm -f $(OBJECTS)
    -rm -f main


