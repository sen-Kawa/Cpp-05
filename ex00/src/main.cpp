#include "../header/Bureaucrat.class.hpp"
#include <exception>

void try_catch(int grade, int test);
void overload(void);
void decrement(void);
void increment(void);
void instantiation(void);

void menu(void)
{
	std::cout
	<< "\n\nMommy, when I grow up, I want to be a bureaucrat!\n"
	<< "\nBureaucrat UNIT TESTER\n"
	<< "\nChoose test to run:\n"
	<< " - [IR] Instantiation range\n"
	<< " - [O] Printing overload\n"
	<< " - [D] Decrement\n"
	<< " - [IN] Increment\n"
	<< " - [A] All\n"
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
		if (test == "IR" || test == "A")
			instantiation();
		if (test == "O" || test == "A")
			overload();
		if (test == "IN" || test == "A")
			increment();
		if (test == "D" || test == "A")
			decrement();
	}
	return (0);
}
