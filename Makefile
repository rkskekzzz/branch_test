CC		= gcc
FLAG	= -Wall -Wextra -Werror
NAME	= calc
SRC		=\
			plus.c\
			main.c
OBJ		= ${SRC.c=.o}

$(NAME): $(SRC)
	$(CC) $(FLAG) -o $@ $^

re:
	rm -f $(NAME)
	$(MAKE)
