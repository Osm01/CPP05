
#include "Intern.h"

Intern::Intern()
{
	std::cout << GREEN << "Calling default constructor of Intern" << RESET << std::endl;
}

Intern::Intern(const Intern &intern)
{
	(void ) intern;
	std::cout << BLUE << "Calling copy constructor of Intern" << RESET << std::endl;
}

Intern &Intern::operator=(const Intern &intern){
	(void ) intern;
	std::cout << PURPLE << "Calling copy operator overload of Intern" << RESET << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << RED << "Calling destructor of bureaucrat" << RESET << std::endl;
}

AForm *Intern::makeForm(const std::string &form_name, const std::string &target)
{
	int i, index;
	const std::string form_string[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	i = -1;
	index = -1;
	while (++i < 3)
	{
		if (form_name == form_string[i])
			index = i;
	}
	if (index >= 0)
		std::cout << "Intern creates " << GREEN << form_name << RESET << std::endl;
	switch (index)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			throw std::runtime_error("form not found !!");
	}
}