
#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"

class Form
{
private:
	const std::string	name;
	bool				signed_status;
	const int 			grade_to_sign;
	const int 			grade_to_exec;
public:
	Form();
	Form(const std::string &name, const int &grade_to_sign, const int &grade_to_exec);
	Form(const Form &form);
	Form	&operator=(const Form &form);
	const std::string	&get_name_form() const;
	bool				get_signed_status() const;
	const int			&get_grade_to_sign() const;
	const int			&get_grade_to_exec() const;
	void				beSigned(const Bureaucrat &bureaucrat);
	~Form();
};

#endif //CPP05_FORM_H
