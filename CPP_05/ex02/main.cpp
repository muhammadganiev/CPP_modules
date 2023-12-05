

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		AForm *SCF = new ShrubberyCreationForm("home");
		Bureaucrat b1("Bob", 1);
		Bureaucrat b2("Jhon", 1);
		b2.signForm(*SCF);
		b1.execForm(*SCF);

		b2.execForm(*SCF);
		delete SCF;
	}

	catch (std::exception & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// try
	// {
	// 	AForm *SCF = new RobotomyRequestForm("home");
	// 	Bureaucrat b1("Bob2", 44);
	// 	Bureaucrat b2("Jhon2", 72);
	// 	b2.signForm(*SCF);
	// 	b1.execForm(*SCF);

	// 	b2.execForm(*SCF);
	// 	delete SCF;
	// }

	// catch (std::exception & e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }

	// try
	// {
	// 	AForm *SCF = new ShrubberyCreationForm("home");
	// 	Bureaucrat b1("Bob2", 5);
	// 	Bureaucrat b2("Jhon2", 24);
	// 	b2.signForm(*SCF);
	// 	b1.execForm(*SCF);

	// 	b2.execForm(*SCF);
	// 	delete SCF;
	// }

	// catch (std::exception & e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }
}
