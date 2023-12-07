

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Form f1("Muha", 0, 140);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() <<std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Form form("Lion", 35, 12);
		Bureaucrat bureaucrat("Jacke", 33);
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Brown", 33);
		Form form("Tim", 33, 12);
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Helen", 50);
		Form form("Faraz", 49, 12);
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------------" << std::endl;
	{
		Bureaucrat bureaucrat("Finn", 44);
		Form form("Rob", 43, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
}
