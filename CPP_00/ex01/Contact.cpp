/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:10 by muganiev          #+#    #+#             */
/*   Updated: 2023/07/08 20:57:02 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::createContact()
{
	std::cout << "Input first_name: ";
	std::cin >> first_name;

	std::cout << "Input last_name: ";
	std::cin >> last_name;

	std::cout << "Input nickname: ";
	std::cin >> nickname;

	std::cout << "Input phone_number: ";
	std::cin >> phone_number;

	std::cout << "Input darkest_secret: ";
	std::cin >> darkest_secret;
}

std::string &Contact::getFirstname()
{
	return first_name;
}

std::string &Contact::getLastname()
{
	return last_name;
}

std::string &Contact::getNickname()
{
	return nickname;
}

std::string &Contact::getPhoneNumber()
{
	return phone_number;
}

std::string &Contact::getDarkestSecret()
{
	return darkest_secret;
}