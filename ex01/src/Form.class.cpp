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
	if (bureau.getGrade() < execute_grade)
		throw Form::GradeTooLowException();
	if_signed = 1;
	return ;
}

Form::Form(void) : name("Default"), execute_grade(75), sign_grade(1)
{
	return ;
}

Form::Form(const std::string name, const int sign_grade, const int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade)
{
	return ;
}

Form::Form(Form const &src)
{
	*this = src;
	return ;
}

Form& Form::operator=(const Form &assign)
{
	this->grade = assign.grade;
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::ostream& operator<<(std::ostream &o, Form const &i)
{
	o << i.getName() 
	<< ", bureaucrat grade " << i.getGrade();
	return (o);
}
