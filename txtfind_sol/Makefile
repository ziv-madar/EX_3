OBJECTS=txtfind.o

test: $(OBJECTS)
	gcc -g -ansi -Wall -pedantic $(OBJECTS) -o txtfind

txtfind: txtfind.o
	gcc -Wall -ansi -pedantic txtfind.o -o txtfind

txtfind.o: txtfind.c txtfind.h
	gcc -g -c -ansi -Wall -pedantic txtfind.c -o txtfind.o

clean:
	rm -f $(OBJECTS) txtfind
