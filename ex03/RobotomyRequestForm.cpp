//
// Created by ouidriss on 2/7/24.
//

#include "RobotomyRequestForm.h"

int	RobotomyRequestForm::timing_robotomized = 0;

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << YELLOW << "Calling parameter constructor of RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm) : AForm(robotomyRequestForm), target(robotomyRequestForm.target)
{
	this->timing_robotomized = robotomyRequestForm.timing_robotomized;
	std::cout << BLUE << "Calling copy constructor of RobotomyRequestForm" << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm){
	std::cout << PURPLE << "Calling copy operator overload of ShrubberyCreationForm" << RESET << std::endl;
	if (this != &robotomyRequestForm)
	{
		AForm::operator=(robotomyRequestForm);
		this->target = robotomyRequestForm.target;
		this->timing_robotomized = robotomyRequestForm.timing_robotomized;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "Calling destructor of RobotomyRequestForm" << RESET << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->get_signed_status())
		throw std::runtime_error("Form not signed");
	if (this->get_grade_to_exec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	{
		if (this->timing_robotomized)
			std::cout << this->target << GREEN << " has been robotomized" << RESET << std::endl;
		else
			std::cout << this->target << RED << " robotomy failed" << RESET << std::endl;
		this->timing_robotomized = !this->timing_robotomized;
	}
}