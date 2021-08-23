CC		= gcc
FLAG	= -Wall -Wextra -Werror
NAME	= calc
SRC		=\
			minus.c\
			mul.c\
			plus.c\
			main.c
OBJ		= ${SRC.c=.o}

$(NAME): $(SRC)
	$(CC) $(FLAG) -o $@ $^

re: clean
	$(MAKE)

clean:
	rm -f $(NAME)
