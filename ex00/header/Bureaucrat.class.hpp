#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>

class Bureaucrat
{
	private:

		const std::string	name;
		int					grade;
		static const int			max_grade = 1;
		static const int			min_grade = 150;
		
	public:

		int			getGrade(void) const;
		std::string	getName(void) const;
		
		void		incrementGrade(void);
		void		decrementGrade(void);

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat&	operator=(Bureaucrat const &assign);
		~Bureaucrat(void);

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &i);

#endif
