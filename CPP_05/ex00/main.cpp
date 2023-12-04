#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b = Bureaucrat("smk", 150);
		std::cout << b;
		Bureaucrat d = Bureaucrat("muha", -1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}