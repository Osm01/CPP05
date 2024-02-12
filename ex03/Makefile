NAME = bureaucrat_form

CXX = c++ -std=c++98
FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp \
		Intern.cpp


CXXERROR = -Wall -Wextra -Werror -fsanitize=address

all : $(NAME)

$(NAME) : $(FILES)
	$(CXX) $(CXXERROR) $(FILES) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean : clean

re : fclean all

.PHONY : all clean fclean re