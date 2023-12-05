
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

#define TREE   \
"     ccee88oo\n\
  C8O8O8Q8PoOb o8oo\n\
 dOB69QO8PdUOpugoO9bD\n\
CgggbU8OU qOp qOdoUOdcb\n\
    6OuU  pf u gcoUodpP\n\
      dfserw  /douUP\n\
        dfsf///\n\
         |||||\n\
         |||||\n\
         |||||\n\
   ......|||||...."

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cref);
		ShrubberyCreationForm(const ShrubberyCreationForm &cref);
		~ShrubberyCreationForm();
		void	execute(const Bureaucrat &executor) const;
		class FileException: public std::exception
		{
			const char *what() const throw();
		};
};

# endif
