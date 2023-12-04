#include "Bureaucrat.hpp"

// Bureaucrat Default Constructor
Bureaucrat::Bureaucrat(): _name("Default"), _grade(150) {
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

// Bureaucrat Parameterized Constructor with grade validation
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

// Bureaucrat Constructor with exception for NULL string
Bureaucrat::Bureaucrat(std::string const * name, int grade) {
    std::cout << "Bureaucrat Null Constructor called" << std::endl;
    if (name == NULL || name->empty()){
        throw NullStringException();
    }
    (void)grade;
}

// Bureaucrat Copy Constructor
Bureaucrat::Bureaucrat(Bureaucrat const & other) { 
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    *this = other;
}

// Bureaucrat Copy Assignment Constructor
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other){
   if (this != &other) {
        std::cout << "Bureaucrat Copy Assignment Constructor called" << std::endl;
		const_cast<std::string&>(_name) = other._name;
		_grade = other._grade;
	}
	return *this;
}

// Bureaucrat Destructor
Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

// Getter for Bureaucrat name
std::string const & Bureaucrat::getName()const{ return _name; }

// Getter for Bureaucrat grade
int Bureaucrat::getGrade()const{ return _grade; }

// Exception class for high grade
const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return RED "Grade is too high" DEFAULT;
}

// Exception class for low grade
const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return RED "Grade is too low" DEFAULT;
}

// Exception class for NULL string
const char * Bureaucrat::NullStringException::what() const throw(){
    return RED "A Null string was passed" DEFAULT;
}

// Function to increment Bureaucrat grade
void Bureaucrat::incrementGrade(){
    if (_grade > 1) {
        _grade--;
    }
    else {
        throw(GradeTooHighException());
    }
}

// Function to decrement Bureaucrat grade
void Bureaucrat::decrementGrade(){
    if (_grade < 150) {
        _grade++;
    }
    else {
        throw(GradeTooLowException());
    }
}

// Overloaded stream insertion operator for Bureaucrat
std::ostream & operator<<(std::ostream & os, Bureaucrat const & b){
    os << GREEN << b.getName() << ", bureaucrat grade " << b.getGrade() << DEFAULT << std::endl;
    return os;
}
