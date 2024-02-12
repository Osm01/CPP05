# include "Bureaucrat.h"
# include "AForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"
#include "Intern.h"


int main()
{
	std::string form_name;
	std::string target = "OSLOS";
//	{
//		form_name = "shrubbery creation";
//		try
//		{
//			Bureaucrat bureaucrat("OUSSAMA", 1);
//			Intern intern;
//			AForm *form = intern.makeForm(form_name, target);
//			bureaucrat.signForm(*form);
//			bureaucrat.executeForm(*form);
//			delete form;
//		}
//		catch (std::exception &e)
//		{
//			std::cout << e.what() << std::endl;
//		}
//	}
//	{
//		form_name = "robotomy request";
//		try
//		{
//			Bureaucrat bureaucrat("OUSSAMA", 1);
//			Intern intern;
//			AForm *form = intern.makeForm(form_name, target);
//			bureaucrat.signForm(*form);
//			for (int i = 0; i < 5; ++i) {
//				bureaucrat.executeForm(*form);
//			}
//			delete form;
//		}
//		catch (std::exception &e)
//		{
//			std::cout << e.what() << std::endl;
//		}
//	}
	{
		form_name = "presidential pardon";
		try
		{
			Bureaucrat bureaucrat("OUSSAMA", 1);
			Intern intern;
			AForm *form = intern.makeForm(form_name, target);
			bureaucrat.signForm(*form);
			bureaucrat.executeForm(*form);
			delete form;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}