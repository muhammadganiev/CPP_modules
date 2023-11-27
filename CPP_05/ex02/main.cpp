#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        std::cout << YELLOW << "SHRUBBERY SIGN & EXEC TEST POSITIVE" << DEFAULT << std::endl;
        Bureaucrat b = Bureaucrat("Muha", 137);
        ShrubberyCreationForm shrub("Shrub");
        b.signAForm(shrub);
        b.executeForm(shrub);
        std::cout << b << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "SHRUBBERY EXEC TEST NEGATIVE" << DEFAULT << std::endl;
        Bureaucrat b = Bureaucrat("Muha", 138);
        ShrubberyCreationForm shrub("Shrub");
        b.signAForm(shrub);
        b.executeForm(shrub);
        std::cout << b << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "SHRUBBERY SIGN TEST NEGATIVE" << DEFAULT << std::endl;
        Bureaucrat b = Bureaucrat("Muha", 146);
        ShrubberyCreationForm shrub("Shrub");
        b.signAForm(shrub);
        b.executeForm(shrub);
        std::cout << b << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "ROBOTOMY SIGN TEST NEGATIVE" << DEFAULT << std::endl;
        Bureaucrat b = Bureaucrat("Muha", 146);
        RobotomyRequestForm robot("Robot");
        b.signAForm(robot);
        b.executeForm(robot);
        std::cout << b << std::endl;
        std::cout << robot << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "ROBOTOMY SIGN TEST POSITIVE" << DEFAULT << std::endl;
        Bureaucrat b = Bureaucrat("Muha", 41);
        RobotomyRequestForm robot("Robot");
        b.signAForm(robot);
        b.executeForm(robot);
        std::cout << b << std::endl;
        std::cout << robot << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "PRESIDENTIAL PARDON SIGN TEST POSITIVE" << DEFAULT << std::endl;
        Bureaucrat b = Bureaucrat("Muha", 4);
        PresidentialPardonForm pardon("Class A");
        b.signAForm(pardon);
        b.executeForm(pardon);
        std::cout << b << std::endl;
        std::cout << pardon << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
