#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include "AForm.class.hpp"
#include <exception>
#include <iostream>

class Intern
{
	public:

		AForm*	makeForm(std::string form, std::string target);

		Intern(void);
		Intern(Intern const &src);
		Intern&	operator=(Intern const &assign);
		~Intern(void);

		class InvalidFormException : public std::exception
		{
			public:

				virtual const char* what() const throw()
				{
					return ("Invalid form.");
				}
		};
};

#endif

