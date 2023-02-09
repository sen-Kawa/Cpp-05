#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;

	public:

		std::string	getTarget(void) const;

		virtual void	execute(Bureaucrat const &executor) const;

		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const &assign);
		~RobotomyRequestForm(void);
};

#endif

