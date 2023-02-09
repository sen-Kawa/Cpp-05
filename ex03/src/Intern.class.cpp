#include "../header/Intern.class.hpp"
#include "../header/ShrubberyCreationForm.class.hpp"
#include "../header/RobotomyRequestForm.class.hpp"
#include "../header/PresidentialPardonForm.class.hpp"

static AForm* makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm);
}

static AForm* makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm);
}

static AForm* makePresidential(std::string target)
{
	return (new PresidentialPardonForm);
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	std::string	types[3] = {"Shrubbery creation", "Robotomy request", "Presidential pardon"};
	AForm*		(*functionPtr[3])(std::string targett) = {&makeShrubbery, &makeRobotomy, &makePresidential};
	AForm*		chosen = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (form == types[i])

	}



	return ();
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
	return (*this);
}

Intern::~Intern(void)
{
	return ;
}
