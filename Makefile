CC=gcc
CFLAGS=-I.
OBJ = simplechain.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

simplechain: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o simplechain
