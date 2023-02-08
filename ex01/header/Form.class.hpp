#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#pragma once
#include <exception>
#include <iostream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string	name;
		bool				if_signed = 0;
		const int			sign_grade;
		const int			execute_grade;
		static const int	min_grade = 150;
		static const int	max_grade = 1;


	public:

		std::string	getName(void) const;
		bool		getIfSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecuteGrade(void) const;
		
		void		beSigned(Bureaucrat &bureau);

		Form(void);
		Form(const std::string name, const int sign_grade, const int execute_grade);
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
