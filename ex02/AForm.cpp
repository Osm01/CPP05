#include "AForm.h"

AForm::AForm() : name("default_AForm_name") , grade_to_sign(1) , grade_to_exec(1)
{
	signed_status = false;
	std::cout << GREEN << "Calling default constructor of AForm" << RESET << std::endl;
}

AForm::AForm(const std::string &name, const int &grade_to_sign, const int &grade_to_exec) : name(name) , grade_to_sign(grade_to_sign) , grade_to_exec(grade_to_exec)
{
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw Bureaucrat::GradeTooLowException();
	signed_status = false;
	std::cout << YELLOW << "Calling parameter constructor of AForm" << RESET << std::endl;
}

AForm::AForm(const AForm &form) : name(form.name) , grade_to_sign(form.grade_to_sign) , grade_to_exec(form.grade_to_exec)
{
	this->signed_status = form.signed_status;
	std::cout << BLUE << "Calling copy constructor of AForm" << RESET << std::endl;
}

AForm &AForm::operator=(const AForm &form){
	std::cout << PURPLE << "Calling copy operator overload of AForm" << RESET << std::endl;
	if (this != &form)
		this->signed_status = form.signed_status;
	return (*this);
}

const std::string &AForm::get_name_form() const
{
	return (this->name);
}

const int &AForm::get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

const int &AForm::get_grade_to_exec() const
{
	return (this->grade_to_exec);
}

bool AForm::get_signed_status() const
{
	return (this->signed_status);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->grade_to_sign < bureaucrat.getGrade())
		throw Bureaucrat::GradeTooLowException();
	this->signed_status = true;
}

AForm::~AForm()
{
	std::cout << RED << "Calling destructor of AForm" << RESET << std::endl;
}