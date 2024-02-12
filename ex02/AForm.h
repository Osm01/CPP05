
#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.h"

class AForm
{
private:
	const std::string	name;
	bool				signed_status;
	const int 			grade_to_sign;
	const int 			grade_to_exec;
public:
	AForm();
	AForm(const std::string &name, const int &grade_to_sign, const int &grade_to_exec);
	AForm(const AForm &form);
	AForm	&operator=(const AForm &form);
	virtual ~AForm();
	const std::string	&get_name_form() const;
	bool				get_signed_status() const;
	const int			&get_grade_to_sign() const;
	const int			&get_grade_to_exec() const;
	void				beSigned(const Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;
};

#endif
