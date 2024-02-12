# include "Bureaucrat.h"
# include "AForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"


int main()
{
	std::string target = "OSLOS";
	{
		// Required grades: sign 145, exec 137
		Bureaucrat bureaucrat("OUSSAMA", 137);
		ShrubberyCreationForm shrubberyCreationForm(target);
		bureaucrat.signForm(shrubberyCreationForm);
		bureaucrat.executeForm(shrubberyCreationForm);
	}
	{
		// Required grades: sign 72, exec 45
		Bureaucrat bureaucrat("OUSSAMA", 45);
		RobotomyRequestForm	robotomyRequestForm("7SANE");
		bureaucrat.signForm(robotomyRequestForm);
		for(int i = 0; i < 5; i ++)
		{
			bureaucrat.executeForm(robotomyRequestForm);
		}
	}
	{
		// Required grades: sign 25, exec 5
		Bureaucrat bureaucrat("OUSSAMA", 5);
		PresidentialPardonForm	pardonForm(target);
		bureaucrat.signForm(pardonForm);
		bureaucrat.executeForm(pardonForm);
	}
	return (0);
}