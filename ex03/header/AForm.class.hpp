#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP

#pragma once
#include <exception>
#include <iostream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class AForm
{
	private:

		const std::string	name;
		const int			sign_grade;
		const int			execute_grade;
		static const int	min_grade = 150;
		static const int	max_grade = 1;
		bool				if_signed;


	public:

		std::string		getName(void) const;
		bool			getIfSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecuteGrade(void) const;
		
		void			beSigned(Bureaucrat &bureau);

		void			executeCheck(Bureaucrat const &executor) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;

		AForm(void);
		AForm(const std::string name, const int sign_grade, const int execute_grade);
		AForm(AForm const &src);
		AForm&	operator=(AForm const &assign);
		virtual ~AForm(void);
		
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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form not signed.");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, AForm const &i);

#endif
