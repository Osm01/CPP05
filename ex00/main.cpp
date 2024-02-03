#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat bureaucrat1("OUSSAMA", 0);
		Bureaucrat bureaucrat2(bureaucrat1);
		std::cout << bureaucrat2;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat1("IDRISSI", 150);
		Bureaucrat bureaucrat2 = bureaucrat1;
		std::cout << bureaucrat2;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat1("high_man", 5);
		for(;;)
		{
			bureaucrat1.increment();
			std::cout << bureaucrat1;
		}
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}
}