CC=gcc
OBJ=liste.o perfs.o
CFLAGS=-std=c11 -Wall -Wextra -Werror -O0

main: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run : main
	./main

.PHONY : clean
clean:
	rm -f main *.o
