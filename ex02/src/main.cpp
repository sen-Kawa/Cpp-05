#include "../header/Bureaucrat.class.hpp"
#include "../header/AForm.class.hpp"
#include "../header/ShrubberyCreationForm.class.hpp"
#include <exception>

void shrubberyTest(void)
{
	ShrubberyCreationForm	formi("moon");	
	Bureaucrat				bureau("bureau", 120);

	bureau.signForm(formi);
	bureau.executeForm(formi);
	return ;
}

void menu(void)
{
	std::cout
	<< "\nBureaucrat UNIT TESTER\n"
	<< "\nChoose test to run:\n"
	<< " - [S] Shrubbery Creation Form\n"
	<< " - [R] Robotomy Request Form\n"
	<< " - [P] Presidential Pardon Form\n"
	<< " - [E] Exit"
	<< std::endl;
}

int main(void)
{
	std::string	test;

	while (test.compare("E") != 0)
	{
		menu();
		getline(std::cin, test);
		if (test == "S")
			shrubberyTest();
	}
	return (0);
}
