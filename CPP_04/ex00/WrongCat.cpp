/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:14:02 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Calling default WrongCat constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &old)
	: WrongAnimal(old)
{
	std::cout << "Calling WrongCat copy constructor" << std::endl;
	type = old.type;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "Calling WrongCat copy assignment constructor" << std::endl;
	if (&rhs == this)
		return (*this);
	type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Calling WrongCat destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow 😻" << std::endl;
}