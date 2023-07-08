/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:09:26 by muganiev          #+#    #+#             */
/*   Updated: 2023/07/08 19:24:00 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define COUNT_N 8

#include <iostream>
# include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int current_contact;
		Contact arr[COUNT_N];
		void 	getInfo();
		int 	printPhonebook();
		void 	printAtributW10(std::string & atribut);

	public:
		PhoneBook();
		~PhoneBook();

		void	AddContact();
		void	SearchContact();
};

#endif