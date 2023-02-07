#include "../header/Bureaucrat.class.hpp"

int main(void)
{
	std::cout << "\nTESTING INSTANTIATION RANGES\n\n";
	//test instantiation ranges
	
	Bureaucrat	f("Bureau0", -500);
	Bureaucrat	a("Bureau1", 0);
	Bureaucrat	b("Bureau2", 1);
	Bureaucrat	c("Bureau3", 150);
	Bureaucrat	d("Bureau4", 151);
	Bureaucrat	e("Bureau5", 300);

	std::cout << f << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	//test increment
	//test decrement
	return (0);
}

