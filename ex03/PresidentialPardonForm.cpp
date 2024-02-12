
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("default_PardonForm", 25, 5), target(target)
{
	std::cout << YELLOW << "Calling parameter constructor of PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pardonForm) : AForm(pardonForm)
{
	this->target = pardonForm.target;
	std::cout << BLUE << "Calling copy constructor of PresidentialPardonForm" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pardonForm){
	std::cout << PURPLE << "Calling copy operator overload of PresidentialPardonForm" << RESET << std::endl;
	if (this != &pardonForm)
	{
		AForm::operator=(pardonForm);
		this->target = pardonForm.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "Calling destructor of PresidentialPardonForm" << RESET << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->get_signed_status())
		throw std::runtime_error("Form not signed");
	if (this->get_grade_to_exec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target << GREEN << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}