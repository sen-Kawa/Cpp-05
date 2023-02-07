#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include <exception>
#include <iostream>

class Form
{
	private:

		const std::string	name;
		bool				if_signed;
		const int			grade;
		const int			required_grade;


	public:

		std::string	getName(void) const;
		bool		getIfSigned(void) const;
		int			getGrade(void) const;
		int			getRequiredGrade(void) const;

		Form(void);
		Form(Form const &src);
		Form&	operator=(Form const &assign);
		~Form(void);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low.");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, Form const &i);

#endif
