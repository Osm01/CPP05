//
// Created by ouidriss on 2/7/24.
//

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "AForm.h"

class ShrubberyCreationForm : public AForm{
private:
	std::string	target;
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &shrubberyCreationForm);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat const & executor) const;
};


#endif
