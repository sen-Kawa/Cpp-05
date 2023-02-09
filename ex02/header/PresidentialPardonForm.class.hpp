#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "AForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;

	public:

		std::string	getTarget(void) const;

		virtual void	execute(Bureaucrat const &executor) const;

		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const &assign);
		~PresidentialPardonForm(void);
};

#endif

