

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &cref);
		Form &operator=(const Form &cref);
		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		std::string	getName(void) const;
		int			getsignGrade(void) const;
		int			getexecGrade(void) const;
		bool		signStatus(void) const;
		void		beSigned(const Bureaucrat &cref);
};

std::ostream& operator<<(std::ostream& out, const Form &cref);

# endif
