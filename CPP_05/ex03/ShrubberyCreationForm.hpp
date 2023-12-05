/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:09:49 by bsaeed            #+#    #+#             */
/*   Updated: 2023/12/05 21:49:03 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

#define TREE        "\033[1;32m       ,@@@@@@@,\
\n                  ,,,.   ,@@@@@@/@@,  .oo8888o.\
\n               ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\
\n              ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\
\n              %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\
\n              %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\
\n              `&%\\ ` /%&'    |.|        \\ '|8'\
\n                  |o|        | |         | |\
\n                  |.|        | |         | |\
\n               \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\033[0m\n"

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
		std::string	getTarget(void) const;
};

# endif
