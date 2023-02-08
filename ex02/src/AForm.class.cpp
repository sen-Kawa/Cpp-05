#include "../header/AForm.class.hpp"
#include <exception>
#include <ostream>

std::string  AForm::getName(void) const
{
	return (this->name);
}

bool AForm::getIfSigned(void) const
{
	return (this->if_signed);
}

int AForm::getSignGrade(void) const
{
	return (this->sign_grade);
}

int AForm::getExecuteGrade(void) const
{
	return (this->execute_grade);
}

void AForm::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() > sign_grade)
		throw AForm::GradeTooLowException();
	if_signed = 1;
	return ;
}

AForm::AForm(void) : name("Default AForm"), sign_grade(75), execute_grade(1), if_signed(false)
{
	return ;
}

AForm::AForm(const std::string name, const int sign_grade, const int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if_signed = false;
	if (execute_grade > min_grade)
		throw AForm::GradeTooLowException();
	else if (execute_grade < max_grade)
		throw AForm::GradeTooHighException();
	return ;
}

AForm::AForm(AForm const &src) : name(src.name), sign_grade(src.sign_grade), execute_grade(src.execute_grade)
{
	this->if_signed = src.if_signed;
	return ;
}

AForm& AForm::operator=(const AForm &assign)
{
	this->if_signed = assign.if_signed;
	return (*this);
}

AForm::~AForm(void)
{
	return ;
}

std::ostream& operator<<(std::ostream &o, AForm const &i)
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
