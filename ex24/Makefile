NAME = libft.a
SRC = srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_strcmp.c\
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c
SRCO = ft_putchar.o\
	  ft_putstr.o\
	  ft_strcmp.o\
	  ft_strlen.o\
	  ft_swap.o
HEADERS = -I includes/
FLAGS = -Werror -Wextra -Wall -c 

all : $(NAME) 

$(NAME):
		gcc $(FLAGS) $(SRC) $(HEADERS)
		ar -rc $(NAME) $(SRCO)
		ranlib $(NAME)
		echo "coucou lib "
clean :
		rm -rf $(SRCO)
		echo "ciao .o "
 
fclean : clean
		rm -rf $(NAME)
		echo "ciao lib"

re : fclean all