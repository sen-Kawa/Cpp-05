#include "../header/Bureaucrat.class.hpp"
#include "../header/RobotomyRequestForm.class.hpp"
#include "../header/PresidentialPardonForm.class.hpp"
#include "../header/AForm.class.hpp"
#include "../header/ShrubberyCreationForm.class.hpp"
#include "../header/Intern.class.hpp"
#include <exception>

void internTest()
{
	Intern	someRandomIntern;
	AForm*	rrf;
	AForm*	ppf;
	AForm*	scf;
	AForm*	andere;

	std::cout
	<< "\n** INTERN TEST **\n" << std::endl;

	std::cout << "\n>> Robotomy request\n" << std::endl;
	rrf = someRandomIntern.makeForm("Robotomy request", "Bender");

	std::cout << "\n>> Presidential pardon\n" << std::endl;
	ppf = someRandomIntern.makeForm("Presidential pardon", "Banana");

	std::cout << "\n>> Shrubbery creation\n" << std::endl;
	scf = someRandomIntern.makeForm("Shrubbery creation", "Venus");

	std::cout << "\n>> Andere\n" << std::endl;
	andere = someRandomIntern.makeForm("Andere", "Apple");

	delete rrf;
	delete ppf;
	delete scf;
	delete andere;
	std::cout
	<< "\n** END OF INTERN TEST **\n" << std::endl;
	return ;
}

void menu(void)
{
	std::cout
	<< "\nBureaucrat UNIT TESTER\n"
	<< "\nChoose test to run:\n"
	<< " - [I] Intern Test\n"
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
		if (test == "I")
			internTest();
	}
	return (0);
}
