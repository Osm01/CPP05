//
// Created by ouidriss on 2/7/24.
//

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "AForm.h"

class RobotomyRequestForm : public  AForm{
private:
	std::string target;
	static int	timing_robotomized;
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &robotomyRequestForm);
	~RobotomyRequestForm();
	void	execute(Bureaucrat const & executor) const;
};


#endif
