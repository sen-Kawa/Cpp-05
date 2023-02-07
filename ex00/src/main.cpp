#include "../header/Bureaucrat.class.hpp"
#include <exception>

void try_catch(int grade)
{
	try
	{
		Bureaucrat	bureau("Bureau", grade);
		std::cout
		<< "SUCCESFULL INSTANTIATION!" << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout
		<< "UNSUCCESFULL: Exception arose. " 
		<<e.what() << ": " << grade
		<< std::endl;
	}
}

void instantiation()
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

void overload()
{
	std::cout << "\nTESTING << OVERLOAD\n\n";

	Bureaucrat	b("Bureau2", 1);
	Bureaucrat	g("Bureau6", 50);
	Bureaucrat	c("Bureau3", 150);

	std::cout << b << std::endl;
	std::cout << g << std::endl;
	std::cout << c << std::endl;

}

int main(void)
{
	instantiation();
	overload();
	//test increment
	//test decrement
	return (0);
}

