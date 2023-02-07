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
	try
	{
		grade--;
		if (grade < max_grade)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cout 
		<< e.what() << std::endl;
	}
	return ;
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		grade++;
		if (grade > min_grade)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(void) : name("Default"), grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	try
	{
		if (grade > min_grade)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < max_grade)
			throw Bureaucrat::GradeTooHighException();
		else	
			this->grade = grade;
	}
	catch (std::exception &e)
	{
		std::cout 
		<< name << " threw the following exception: "
		<< e.what() << " with the grade " << grade
		<< std::endl;
	}
	std::cout << Bureaucrat << std::endl;
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
