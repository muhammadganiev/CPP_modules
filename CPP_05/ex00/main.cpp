
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A("Helen", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat B("Bilal", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat C("Cobra", 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat D("Kai", 120);
		std::cout << D;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat E("Karl", 1);
		for(;;)
		{
			std::cout << E << std::endl;
			E.decGrade();
		}
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
