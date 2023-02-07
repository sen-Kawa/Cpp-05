#include "../header/Bureaucrat.class.hpp"
#include <exception>

void try_catch(int grade, int test)
{
	try
	{
		Bureaucrat	bureau("Bureau", grade);
		if (test == 2)
		{
			bureau.incrementGrade();
			std::cout << "New grade: " << bureau.getGrade()
			<< std::endl;
		}
		if (test == 3)
		{
			bureau.decrementGrade();
			std::cout << "New grade: " << bureau.getGrade()
			<< std::endl;
		}
		std::cout << "SUCCESFULL!" << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout
		<< "UNSUCCESFULL: Exception arose.\n" 
		<<e.what() << ": " << grade
		<< std::endl;
	}
}

void decrement(void)
{
	std::cout
	<< "\n** TESTING DECREMENT **\n";

	int	grades[7] = {150, 75, 20, 50, 1, 2, 3};
	int	i = 0;

	while (i < 7)
	{
		std::cout
		<< "\n...Testing decrement on grade "
		<< grades[i] << std::endl;
		try_catch(grades[i++], 3);
	}
	return ;
}

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
		try_catch(grades[i++], 2);
	}
	return ;
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
		try_catch(grades[i++], 1);
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
