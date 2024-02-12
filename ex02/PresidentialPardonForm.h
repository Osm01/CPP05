//
// Created by ouidriss on 2/7/24.
//

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.h"

class PresidentialPardonForm : public AForm{
private:
	std::string	target;
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &pardonForm);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &pardonForm);
	~PresidentialPardonForm();
	void	execute(Bureaucrat const & executor) const;
};


#endif //PRESIDENTIALPARDONFORM_H
