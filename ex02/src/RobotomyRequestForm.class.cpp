#include "../header/RobotomyRequestForm.class.hpp"
#include <cstdlib>
#include <fstream>

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	(void) executor;
	int	random = std::rand() % 2;
	std::cout << "Some drilling noises." << std::endl;
	if (random == 1) 
		std::cout << target << " has been robotomized succesfully." << std::endl;
	else if (random == 0) 
		std::cout << target << " robotomization failed." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy request form", 72, 45), target("space")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy request form", 72, 45), target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(), target(src.target)
{
	*this = src;
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->target = assign.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

