##
## EPITECH PROJECT, 2021
## poll
## File description:
## Makefile
##

CC	=	g++

RM	=	rm -f

SRC	=	sources/main.cpp	\
		sources/Exception.cpp	\
		sources/sorts/bubble.cpp	\
		sources/sorts/insertion.cpp	\
		sources/sorts/merge.cpp	\
		sources/sorts/quickSort.cpp	\
		sources/sorts/selection.cpp	\

NAME	=	301dannon

CFLAGS	=	-I./includes -g

LDFLAGS += -lm -std=c++14

OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LDFLAGS)

tests_run: all
	gcc bonus/*.c tests/*.c -o unit_tests --coverage -lcriterion $(CFLAGS) $(LBLIBS) $(LDFLAGS)
	- ./unit_tests

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re