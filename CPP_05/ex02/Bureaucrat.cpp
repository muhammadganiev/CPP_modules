#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150) {
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name) {
    std::cout << "Bureaucrat Constructor called" << std::endl;
    if (grade > 150){
        throw(GradeTooLowException());
    }
    else if (grade < 1){
        throw(GradeTooHighException());
    }
    else
        _grade = grade;
}

//catch an exception for if NULL is passed to name
Bureaucrat::Bureaucrat(std::string const * name, int grade) {
    std::cout << "Bureaucrat Null Constructor called" << std::endl;
    if (name == NULL || name->empty()){
        throw NullStringException();
    }
    (void)grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & other) { 
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    *this = other;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other){
   if (this != &other) {
        std::cout << "Bureaucrat Copy Assignment Constructor called" << std::endl;
		const_cast<std::string&>(_name) = other._name;
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string const & Bureaucrat::getName()const{ return _name; }

int Bureaucrat::getGrade()const{ return _grade; }

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return RED "Grade is too high" DEFAULT;
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return RED "Grade is too low" DEFAULT;
}

const char * Bureaucrat::NullStringException::what() const throw(){
    return RED "A Null string was passed" DEFAULT;
}

void Bureaucrat::incrementGrade(){
    if (_grade > 1){
        _grade--;
    }
    else{
        throw(GradeTooHighException());
    }
}

void Bureaucrat::decrementGrade(){
    if (_grade < 150){
        _grade++;
    }
    else{
        throw(GradeTooLowException());
    }
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b){
    os << GREEN << b.getName() << ", bureaucrat grade " << b.getGrade() << DEFAULT;
    return os;
}

void Bureaucrat::signAForm(AForm & form)
{
    try
    {
    	form.beSigned(*this);
		std::cout << GREEN << _name << " signed " << form.getName() << DEFAULT << std::endl;
    }
    catch(const std::exception& e)
    {
		std::cout << RED << _name << " couldn't sign " << form.getName() << " because " << e.what() << "." << DEFAULT << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << GREEN << _name << " executed " << form.getName() << DEFAULT << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << "Could not execute form" << " because " << e.what() << DEFAULT << std::endl;
	}
}