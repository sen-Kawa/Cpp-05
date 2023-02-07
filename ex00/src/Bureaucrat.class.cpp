#include "../header/Bureaucrat.class.hpp"

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string  Bureaucrat::getName(void) const
{
	return (this->name);
}

Bureaucrat::Bureaucrat(void) : name("Default"), grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLow();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHigh();
	else	
		this->grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(const Bureaucrat &assign)
{
	this->grade = assign.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}
