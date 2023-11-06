NAME = ft_display_file
FLAFS = -Wall -Werror -Wextra
SRC = ./srcs/*.c
OBJ = $(SRC:.c=.o)
HD = ./includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HD) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all