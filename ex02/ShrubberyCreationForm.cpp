
#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137) , target(target)
{
	std::cout << YELLOW << "Calling parameter constructor of ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm) : AForm(shrubberyCreationForm), target(shrubberyCreationForm.target)
{
	std::cout << BLUE << "Calling copy constructor of ShrubberyCreationForm" << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm){
	std::cout << PURPLE << "Calling copy operator overload of ShrubberyCreationForm" << RESET << std::endl;
	if (this != &shrubberyCreationForm)
	{
		AForm::operator=(shrubberyCreationForm);
		this->target = shrubberyCreationForm.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "Calling destructor of ShrubberyCreationForm" << RESET << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->get_signed_status())
		throw std::runtime_error("Form not signed");
	if (this->get_grade_to_exec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	{
		std::string file_name = target + "__shrubbery";
		std::fstream out_file(file_name.c_str(), std::ios::out);
		if (!out_file)
			return ((void)(std::cout << RED << "error : create file" << std::endl));
		out_file << "---------| HELLO |---------\n";
	}
}