#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	target;

	public:

		int	getShrubberyCreationForm(void) const;

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &assign);
		~ShrubberyCreationForm(void);
};

#endif

