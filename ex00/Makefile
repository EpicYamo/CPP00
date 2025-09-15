SRCS 	:= 
NAME	:=	Megaphone
CPP		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98
RM		:=	rm -rf

all: $(NAME)

$(NAME): $(SRCS)
	${CPP} ${CFLAGS} -o $(NAME) $(SRCS)

clean:
	$(RM) $(NAME)

fclean:	clean

re:		clean all

.PHONY:	all clean fclean re
