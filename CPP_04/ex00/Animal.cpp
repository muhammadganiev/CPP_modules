/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:14:12 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("Base animal")
{
	std::cout << "Calling default Animal constructor" << std::endl;
}

Animal::Animal(const Animal &old)
	: type(old.type)
{
	std::cout << "Calling Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Calling Animal copy assignment constructor" << std::endl;
	if (&rhs == this)
		return (*this);
	type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Calling Animal destructor" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}

const std::string& Animal::getType(void) const
{
	return (type);
}