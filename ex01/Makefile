NAME = bureaucrat_form

CXX = c++ -std=c++98
FILES = main.cpp Bureaucrat.cpp Form.cpp
CXXERROR = -Wall -Wextra -Werror -fsanitize=address

all : $(NAME)

$(NAME) : $(FILES)
	$(CXX) $(CXXERROR) $(FILES) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean : clean

re : fclean all

.PHONY : all clean fclean re