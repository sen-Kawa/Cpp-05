#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include <iostream>

class Intern
{
	public:

		void	makeForm(std::string form, std::string target);

		int		getIntern(void) const;

		Intern(void);
		Intern(Intern const &src);
		Intern&	operator=(Intern const &assign);
		~Intern(void);
};

#endif

