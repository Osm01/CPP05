#include "Bureaucrat.h"
#include "Form.h"


int main()
{
	{
		try
		{
			Bureaucrat bureaucrat("simohamed", 9);
			Form form("random_form", 9, 150);
			bureaucrat.signForm(form);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}