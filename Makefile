CC = gcc
CFLAGS = -std=c11 -W -Wall -Wextra -Werror -g
EXEC = prog
SRC = main.c putchar.c matrice2D.c matrice3D.c player.c
OBJ = main.o putchar.o matrice2D.o matrice3D.o player.o
INSTALL_DIR = /home/skavens/Desktop/C/C00/build

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

main.o: main.c
	$(CC) $(CFLAGS) -o $@ -c $<

putchar.o : putchar.c
	$(CC) $(CFLAGS) -o $@ -c $<

matrice2D.o : matrice2D.c
	$(CC) $(CFLAGS) -o $@ -c $<

matrice3D.o : matrice3D.c
	$(CC) $(CFLAGS) -o $@ -c $<

player.o : player.c
	$(CC) $(CFLAGS) -o $@ -c $<

install:
	cp $(EXEC) $(INSTALL_DIR)

clean:
	rm -f $(OBJ)
