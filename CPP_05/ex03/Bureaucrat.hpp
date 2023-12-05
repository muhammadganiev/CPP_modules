
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);
		~Bureaucrat();
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
		int			getGrade(void) const;

		void		incGrade(void);
		void		decGrade(void);
		void		signForm(AForm &cref);
		void		execForm(const AForm &cref);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &cref);

#endif
