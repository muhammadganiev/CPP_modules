#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b = Bureaucrat("bob", 150);
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b = Bureaucrat("bob", 89);
		Form f = Form("Fox adoption form", 25, 12);
		f.beSigned(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b = Bureaucrat("bob", 25);
		Form f = Form("Fox adoption form", 25, 12);
		f.beSigned(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b = Bureaucrat("bob", 25);
		Form f = Form("Fox adoption form", 25, 12);
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b = Bureaucrat("bob", 26);
		Form f = Form("Fox adoption form", 25, 12);
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}