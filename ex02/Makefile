SRCS	=	main.cpp Bureaucrat.cpp Form.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME 	= Bureaucrat

CC		= c++ -std=c++98 -Wall -Werror -Wextra 

all : $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
