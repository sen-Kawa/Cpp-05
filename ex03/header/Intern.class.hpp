#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include <iostream>

class Intern
{
	private:


	public:

		int	getIntern(void) const;

		Intern(void);
		Intern(Intern const &src);
		Intern&	operator=(Intern const &assign);
		~Intern(void);
};

#endif

