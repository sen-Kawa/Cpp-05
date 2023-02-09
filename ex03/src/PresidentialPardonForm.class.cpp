#include "../header/PresidentialPardonForm.class.hpp"
#include <cstdlib>
#include <fstream>

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	(void) executor;

	std::cout
	<< target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential pardon form", 25, 5), target("space")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential pardon form", 25, 5), target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(), target(src.target)
{
	*this = src;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	this->target = assign.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

