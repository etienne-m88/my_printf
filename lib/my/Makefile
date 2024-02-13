##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## task01
##

SRC	=	my_put_nbr.c	\
		my_put_nbr_binary.c	\
		my_put_nbr_deci.c	\
		my_put_nbr_float.c	\
		my_put_nbr_hexa.c	\
		my_put_nbr_hexa2.c	\
		my_put_nbr_octal.c	\
		my_put_nbr_pointeur.c	\
		flag1.c		\
		flag2.c		\
		flag3.c		\
		printf.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)
	rm -f a.out
	rm -f *log
	rm -f *.a
	rm -f $(OBJ)
	rm -f $(wildcard *~)

re:	fclean all!
