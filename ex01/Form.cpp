#include "Form.h"

Form::Form() : name("default_form_name") , grade_to_sign(1) , grade_to_exec(1)
{
	signed_status = false;
	std::cout << GREEN << "Calling default constructor of Form" << RESET << std::endl;
}

Form::Form(const std::string &name, const int &grade_to_sign, const int &grade_to_exec) : name(name) , grade_to_sign(grade_to_sign) , grade_to_exec(grade_to_exec)
{
	std::cout << YELLOW << "Calling parameter constructor of Form" << RESET << std::endl;
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw Bureaucrat::GradeTooLowException();
	signed_status = false;
}

Form::Form(const Form &form) : name(form.name) , grade_to_sign(form.grade_to_sign) , grade_to_exec(form.grade_to_exec)
{
	this->signed_status = form.signed_status;
	std::cout << BLUE << "Calling copy constructor of Form" << RESET << std::endl;
}

Form &Form::operator=(const Form &form){
	std::cout << PURPLE << "Calling copy operator overload of Form" << RESET << std::endl;
	if (this != &form)
		this->signed_status = form.signed_status;
	return (*this);
}

const std::string &Form::get_name_form() const
{
	return (this->name);
}

const int &Form::get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

const int &Form::get_grade_to_exec() const
{
	return (this->grade_to_exec);
}

bool Form::get_signed_status() const
{
	return (this->signed_status);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->grade_to_sign < bureaucrat.getGrade())
		throw Bureaucrat::GradeTooLowException();
	this->signed_status = true;
}

Form::~Form()
{
	std::cout << RED << "Calling destructor of Form" << RESET << std::endl;
}