/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:09:41 by muganiev          #+#    #+#             */
/*   Updated: 2023/07/25 19:13:45 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int		main()
{
	PhoneBook	pbook;
	std::string	input;

	while(1)
	{
		std::cout << "Input command: ";
        std::getline(std::cin, input);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (input == "ADD")
			pbook.AddContact();
		else if (input == "SEARCH")
			pbook.SearchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Wrong input" << std::endl;
			
		clearerr(stdin);
        std::cin.clear();
	}

	return 0;
}