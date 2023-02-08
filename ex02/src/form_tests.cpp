#include "../header/Bureaucrat.class.hpp"
#include "../header/Form.class.hpp"
#include <exception>

void try_catch_form(int grade)
{
	try
	{
		Form	formi("Formi", 75, grade);
		std::cout << ">> SUCCESFULL!" << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout
		<< ">> UNSUCCESFULL: Exception arose.\n" 
		<<e.what() << ": " << grade
		<< std::endl;
	}
}

void signed_test(void)
{
	std::cout
	<< "\n** TESTING FORM SIGNING **\n";

	int	i = 0;
	int	grades[7] = {1, 15, 23, 50, 150, 78, 96};
	int	grades_bureau[7] = {2, 6, 10, 66, 28, 90, 149};
	while (i < 7)
	{
		std::cout
		<< "\n>> Case " << i << "\n\n" << "...instantiating...\n" << std::endl;
		Bureaucrat	bureau("Bureau", grades_bureau[i]);
		Form	formi("Formy", grades[i], 2);
		std::cout << bureau << std::endl;
		std::cout << formi << std::endl;
		std::cout
		<< "\n...signing...\n" << std::endl;
		bureau.signForm(formi);
		std::cout << formi << std::endl;
		i++;
	}
	std::cout
	<< "\n** END OF TESTING FORM SIGNING **\n";
}

void instantiation_form(void)
{
	std::cout
	<< "\n** TESTING FORM INSTANTIATION RANGES **\n";

	int	grades[7] = {-500, 0, 1, 50, 150, 151, 300};
	int	i = 0;

	while (i < 7)
	{
		std::cout
		<< "\n...Testing grade " << grades[i]
		<< std::endl;
		try_catch_form(grades[i++]);
	}
	std::cout
	<< "\n** END OF TESTING FORM INSTANTIATION RANGES **\n";
}

void overload_form(void)
{
	std::cout << "\n** TESTING FORM << OVERLOAD **\n\n";

	int	i = 0;
	int	grades[7] = {1, 15, 23, 50, 150, 78, 96};
	while (i < 7)
	{
		std::cout
		<< "\n...Instantiating with grade "
		<< grades[i] << std::endl;
		Form	formi("Formy", 75, grades[i]);
		std::cout << formi << std::endl;
		i++;
	}
	std::cout << "\n** END OF TESTING FORM << OVERLOAD **\n\n";
}
