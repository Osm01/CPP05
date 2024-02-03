#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("Bureaucrat_0") , grade(1)
{
	std::cout << GREEN << "Calling default constructor of bureaucrat" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << YELLOW << "Calling parameter constructor of bureaucrat" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name) , grade(bureaucrat.grade)
{
	std::cout << BLUE << "Calling copy constructor of bureaucrat" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b){

	std::cout << PURPLE << "Calling copy operator overload of bureaucrat" << RESET << std::endl;
	if (this != &b)
		this->grade = b.grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	this->grade -= 1;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrement()
{
	this->grade += 1;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Calling destructor of bureaucrat" << RESET << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (o);
}