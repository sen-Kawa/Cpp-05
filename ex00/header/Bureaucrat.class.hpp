#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:

		const std::string	name;
		int					grade;
		
		void	GradeTooLow();
		void	GradeTooHigh();


	public:

		int			getGrade(void) const;
		std::string	getName(void) const;

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat&	operator=(Bureaucrat const &assign);
		~Bureaucrat(void);


};

#endif

