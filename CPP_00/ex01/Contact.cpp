/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:10 by muganiev          #+#    #+#             */
/*   Updated: 2023/07/25 19:19:35 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{

}

Contact::~Contact()
{

}

bool isEOFReached() {
    // Проверяем состояние потока и возвращаем true, если обнаружен EOF (Ctrl+D или Ctrl+Z).
    return std::cin.eof();
}

std::string getInput(const std::string& field_name) {
    std::string input;
    
    while (true) {
        std::cout << "Input " << field_name << ": ";
        std::getline(std::cin, input);

        if (!input.empty()) {
            break; // Выход из цикла, если строка не пустая.
        }

        if (isEOFReached()) {
            std::cout << "EOF (Ctrl+D or Ctrl+Z) detected!" << std::endl;
            break; // Завершение функции при обнаружении EOF.
        }

        std::cout << "Empty input. Please try again." << std::endl;
    }
    
    return input;
}

void Contact::createContact() {
    first_name = getInput("first_name");
    if (isEOFReached()) return;

    last_name = getInput("last_name");
    if (isEOFReached()) return;

    nickname = getInput("nickname");
    if (isEOFReached()) return;

    phone_number = getInput("phone_number");
    if (isEOFReached()) return;

    darkest_secret = getInput("darkest_secret");
    if (isEOFReached()) return;
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