#include "../header/Bureaucrat.class.hpp"
#include "../header/Form.class.hpp"
#include <exception>

void try_catch(int grade, int test);
void overload(void);
void overload_form(void);
void decrement(void);
void increment(void);
void instantiation(void);
void instantiation_form(void);
void signed_test(void);

void menu(void)
{
	std::cout
	<< "\n\nForm up, maggots!\n"
	<< "\nBureaucrat UNIT TESTER\n"
	<< "\nChoose test to run:\n"
	<< " - [B] Bureaucrat tests\n"
	<< " - [F] Form tests\n"
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
		if (test == "B")
		{
			instantiation();
			overload();
			increment();
			decrement();
		}
		if (test == "F")
		{
			instantiation_form();
			overload_form();
			signed_test();
		}
	}
	return (0);
}
