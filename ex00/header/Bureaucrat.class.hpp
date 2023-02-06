#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>

class Bureaucrat
{
	private:

		const std::string	name;
		int					grade;


	public:

		int			getGrade(void) const;
		std::string	getName(void) const;

		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat&	operator=(Bureaucrat const &assign);
		~Bureaucrat(void);
};

#endif

