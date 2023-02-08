#include "../header/Form.class.hpp"
#include <exception>
#include <ostream>

std::string  Form::getName(void) const
{
	return (this->name);
}

bool Form::getIfSigned(void) const
{
	return (this->if_signed);
}

int Form::getSignGrade(void) const
{
	return (this->sign_grade);
}

int Form::getExecuteGrade(void) const
{
	return (this->execute_grade);
}

void Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() > sign_grade)
		throw Form::GradeTooLowException();
	if_signed = 1;
	return ;
}

Form::Form(void) : name("Default Form"), sign_grade(75), execute_grade(1), if_signed(false)
{
	return ;
}

Form::Form(const std::string name, const int sign_grade, const int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if_signed = false;
	if (execute_grade > min_grade)
		throw Form::GradeTooLowException();
	else if (execute_grade < max_grade)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(Form const &src) : name(src.name), sign_grade(src.sign_grade), execute_grade(src.execute_grade)
{
	this->if_signed = src.if_signed;
	return ;
}

Form& Form::operator=(const Form &assign)
{
	this->if_signed = assign.if_signed;
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::ostream& operator<<(std::ostream &o, Form const &i)
{
	std::string	status;

	if (i.getIfSigned() == 0)
		status = "not signed";
	else if (i.getIfSigned() == 1)
		status = "signed";

	o << i.getName() << ", is " << status 
	<< ", the signing grade is " << i.getSignGrade()
	<< ", the executing grade is " << i.getExecuteGrade();
	return (o);
}
