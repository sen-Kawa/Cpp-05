#include "../header/ShrubberyCreationForm.class.hpp"
#include <fstream>

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	(void) executor;
	std::string		out = target + "_shrubbery";
	std::ofstream	outfile(out.c_str());

	outfile << "       _-_" << std::endl;
	outfile << "    /~~   ~~\\" << std::endl;
	outfile << " /~~         ~~\\" << std::endl;
	outfile << "{               }" << std::endl;
	outfile << " \\  _-     -_  /" << std::endl;
	outfile << "   ~  \\\\ //  ~" << std::endl;
	outfile << "       | |" << std::endl;
	outfile << "       | |" << std::endl;
	outfile << "      // \\\\" << std::endl;
	outfile.close();

	return ;	
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery creation form", 145, 137), target("space")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery creation form", 145, 137), target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(), target(src.target)
{
	*this = src;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	this->target = assign.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

