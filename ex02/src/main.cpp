#include "../header/Bureaucrat.class.hpp"
#include "../header/RobotomyRequestForm.class.hpp"
#include "../header/AForm.class.hpp"
#include "../header/ShrubberyCreationForm.class.hpp"
#include <exception>

void shrubberyTest(void)
{
	int	i = 0;
	int	grades[3] = {150, 140, 100};
	std::cout
	<< "** SHRUBBERY TEST **\n" << std::endl;

	while (i < 3)
	{
		std::cout << "\n  >> TEST " << i << "\n" << std::endl;

		ShrubberyCreationForm	formi("moon");	
		Bureaucrat				bureau("Bureau", grades[i]);
		std::cout << formi << std::endl;
		std::cout << bureau << std::endl;

		std::cout << "\n...signing...\n" << std::endl;
		bureau.signForm(formi);

		std::cout << "\n...executing...\n" << std::endl;
		bureau.executeForm(formi);
		i++;
	}
	std::cout
	<< "\n** END OF SHRUBBERY TEST **\n" << std::endl;
	return ;
}

void roboTest(void)
{
	int	i = 0;
	int	grades[3] = {78, 60, 38};
	std::cout
	<< "** ROBOTOMY TEST **\n" << std::endl;

	while (i < 3)
	{
		std::cout << "\n  >> TEST " << i << "\n" << std::endl;

		RobotomyRequestForm		robo("Grape");	
		Bureaucrat				bureau("Bureau", grades[i]);
		std::cout << robo << std::endl;
		std::cout << bureau << std::endl;

		std::cout << "\n...signing...\n" << std::endl;
		bureau.signForm(robo);

		std::cout << "\n...executing...\n" << std::endl;
		bureau.executeForm(robo);
		i++;
	}
	std::cout
	<< "\n** END OF ROBOTOMY TEST **\n" << std::endl;
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
		if (test == "R")
			roboTest();
	}
	return (0);
}
