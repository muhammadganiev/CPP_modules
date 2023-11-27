#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
        Intern someRandomIntern;
        AForm *rrf;
        rrf = someRandomIntern.makeForm("Presidential Pardon", "Muha");
        Bureaucrat b = Bureaucrat("benjamin", 1);
        b.signAForm(*rrf);
        b.executeForm(*rrf);
        delete rrf;
}
