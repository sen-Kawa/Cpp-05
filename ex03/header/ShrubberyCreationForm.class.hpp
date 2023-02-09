#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;

	public:

		std::string	getTarget(void) const;

		virtual void	execute(Bureaucrat const &executor) const;

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &assign);
		~ShrubberyCreationForm(void);
};

#endif

