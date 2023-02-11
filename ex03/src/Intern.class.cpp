#include "../header/Intern.class.hpp"
#include "../header/ShrubberyCreationForm.class.hpp"
#include "../header/RobotomyRequestForm.class.hpp"
#include "../header/PresidentialPardonForm.class.hpp"
#include <exception>

static AForm* makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm* makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	std::string	types[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
	AForm*		(*functionPtr[3])(std::string target) = {&makeShrubbery, &makeRobotomy, &makePresidential};
	AForm*		chosen = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (form == types[i])
		{
			chosen = (functionPtr[i])(target);
			break ;
		}
	}
	try
	{
		if (chosen == NULL)
			throw Intern::InvalidFormException();
		std::cout << "Intern creates form " << form << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << "Form not created because: " << e.what() << std::endl;
	}
	return (chosen);
}

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern &	Intern::operator=(const Intern &assign)
{
	(void) assign;
	return (*this);
}

Intern::~Intern(void)
{
	return ;
}
