/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:09:29 by muganiev          #+#    #+#             */
/*   Updated: 2023/07/08 20:57:37 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	current_contact = 0;
	getInfo();
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::AddContact()
{
	arr[current_contact].createContact();
	current_contact ++;
	if (current_contact == 8)
		current_contact = 0;
}

void	PhoneBook::SearchContact()
{
	int i;
	int input;

	if (arr[0].getFirstname().empty())
	{
		std::cout << "Phone book is empty" << std::endl;
		return ;
	}

	i = printPhonebook();

	std::cout << "Input index: ";
	std::cin >> input;
	if (input > 0 && input < i + 1)
	{
		std::cout << "Firstname:\t" << arr[input - 1].getFirstname() << std::endl;
		std::cout << "Laststname:\t" << arr[input - 1].getLastname() << std::endl;
		std::cout << "Nickname:\t" << arr[input - 1].getNickname() << std::endl;
		std::cout << "Phone number:\t" << arr[input - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret:\t" << arr[input - 1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Wrong index" << std::endl;
    std::cin.clear();
	std::cin.ignore(32767,'\n');
}


void PhoneBook::getInfo() {
	std::cout	<< "+-------------------------------------------------------+\n"
				<< "|                  Input command                        |\n"
				<< "+-------------------------------------------------------+\n"
				<< "|                                                       |\n"
				<< "|     ADD     -   Add contact                           |\n"
				<< "|                                                       |\n"
				<< "|     SEARCH  -   Search contact                        |\n"
				<< "|                                                       |\n"
				<< "|     EXIT    -   Exit Phone book                       |\n"
				<< "|                                                       |\n"
				<< "+-------------------------------------------------------+\n";
}


int 	PhoneBook::printPhonebook()
{
	int i;

	std::cout << "+--------------------------------------+\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";

	for (i = 0; i < COUNT_N; i++)
	{
		if (arr[i].getFirstname().empty())
			break;
		std::cout << "|" << std::setw(5) << i + 1 << "|";
		printAtributW10(arr[i].getFirstname());
		printAtributW10(arr[i].getLastname());
		printAtributW10(arr[i].getNickname());
		std::cout << "\n";
	}

	std::cout << "+--------------------------------------+\n";
	return i;
}


void PhoneBook::printAtributW10(std::string &atribut)
{
	if (atribut.length() > 10)
	{
		std::cout << atribut.substr(0, 9) << ".|";
	}
	else
	{
		std::cout << std::setw(10) << atribut << "|";
	}
}