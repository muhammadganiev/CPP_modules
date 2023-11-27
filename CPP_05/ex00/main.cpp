#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << YELLOW << "NORMAL TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Muha", 10);
        Bureaucrat bureaucrat2("Bil", 7);

        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat2 << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
     try
    {
        std::cout << YELLOW << "TEST INCREMENT AND DECREMENT" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Muha", 10);
        Bureaucrat bureaucrat2("Bil", 7);
        bureaucrat.incrementGrade();
        bureaucrat2.decrementGrade();

        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat2 << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "NULL STRING TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat(NULL, 50); // segmentation fault
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE TOO HIGH TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Muha", -1);
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE TOO LOW TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Muha", 151);
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "INCREMENT ABOVE MINIMUM TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Muha", 150);
        bureaucrat.decrementGrade();
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "DECREMENT BELOW MAXIMUM TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Muha", 1);
        bureaucrat.incrementGrade();
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}