#include "../header/Bureaucrat.class.hpp"
#include <exception>

void increment(void)
{
	std::cout
	<< "\n** TESTING INCREMENT **\n";

	int	grades[7] = {150, 75, 20, 50, 1, 2, 3};
	int	i = 0;

	while (i < 7)
	{
		std::cout
		<< "\n...Testing increment on grade "
		<< grades[i] << std::endl;
		try_catch(grades[i++]);
	}
	return ;
}

void try_catch(int grade)
{
	try
	{
		Bureaucrat	bureau("Bureau", grade);
		std::cout
		<< "SUCCESFULL!" << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout
		<< "UNSUCCESFULL: Exception arose.\n" 
		<<e.what() << ": " << grade
		<< std::endl;
	}
}

void instantiation(void)
{
	std::cout
	<< "\n** TESTING INSTANTIATION RANGES **\n";

	int	grades[7] = {-500, 0, 1, 50, 150, 151, 300};
	int	i = 0;

	while (i < 7)
	{
		std::cout
		<< "\n...Testing grade " << grades[i]
		<< std::endl;
		try_catch(grades[i++]);
	}
}

void overload(void)
{
	std::cout << "\n** TESTING << OVERLOAD **\n\n";

	int	i = 0;
	int	grades[7] = {1, 15, 23, 50, 150, 78, 96};
	while (i < 7)
	{
		std::cout
		<< "\n...Instantiating with grade "
		<< grades[i] << std::endl;
		Bureaucrat	b("Bureau", grades[i]);
		std::cout << b << std::endl;
		i++;
	}
}

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
		if (test == "D" || test == "A")
			increment();
		if (test == "IN" || test == "A")
			decrement();
	}
	return (0);
}
