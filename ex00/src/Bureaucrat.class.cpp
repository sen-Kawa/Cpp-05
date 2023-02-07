#include "../header/Bureaucrat.class.hpp"
#include <exception>
#include <ostream>

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string  Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::incrementGrade(void)
{
	if (grade <= max_grade)
		throw Bureaucrat::GradeTooHighException();
	grade--;
	return ;
}

void Bureaucrat::decrementGrade(void)
{
	if (grade >= min_grade)
		throw Bureaucrat::GradeTooLowException();
	grade++;
	return ;
}

Bureaucrat::Bureaucrat(void) : name("Default"), grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > min_grade)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < max_grade)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &assign)
{
	this->grade = assign.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() 
	<< ", bureaucrat grade " << i.getGrade();
	return (o);
}
