#include "../header/ShrubberyCreationForm.class.hpp"
#include <fstream>

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::string		out = target + "_shrubbery";
	std::ofstream	outfile(out);

	return ;	
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), target("space")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	*this = src;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

