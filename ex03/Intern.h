//
// Created by ouidriss on 2/12/24.
//

#ifndef INTERN_H
#define INTERN_H

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "map"

class Intern{
public:
	Intern();
	Intern(const Intern &intern);
	Intern	&operator=(const Intern &intern);
	~Intern();
	AForm	*makeForm(const std::string &form_name, const std::string &target);
};


#endif
