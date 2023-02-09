#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include "AForm.class.hpp"
#include <iostream>

class Intern
{
	public:

		AForm*	makeForm(std::string form, std::string target);

		int		getIntern(void) const;

		Intern(void);
		Intern(Intern const &src);
		Intern&	operator=(Intern const &assign);
		~Intern(void);
};

#endif

