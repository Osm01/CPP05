#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat			&operator=(const Bureaucrat &b);
	const std::string	&getName() const;
	int 				getGrade() const;
	void				increment();
	void				decrement();
	void				signForm(Form &form);
	~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif