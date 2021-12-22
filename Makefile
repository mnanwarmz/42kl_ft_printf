NAME	=	libftprintf.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

AR		=	ar rcs

RL		=	ranlib

SRCS	=	$(wildcard *.c)

OBJS	=	$(SRCS:.c=.o)


all:	$(NAME)

$(NAME):	$(OBJS)
	@	echo Generating $(NAME)..
	@	$(AR) $(NAME) $(OBJS)
	@	$(RL) $(NAME)
	@	echo Done.

.c.o:
	@	echo Compiling $(<:.c=.o)..
	@	$(CC) $(CFLAGS) -c $< -o $@
	@	echo Done.

clean:
	@	echo Cleaning..
	@	$(RM) $(OBJS) $(NAME)
	@	echo Done.

fclean:	clean
	@	echo Removing $(NAME)..
	@	$(RM) $(NAME)
	@	echo Done.

re:	fclean all

.PHONY:	all clean fclean re
