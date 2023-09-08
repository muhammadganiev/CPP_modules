/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/07/13 18:40:44 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Calling default Cat constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &old)
	: Animal(old)
{
	std::cout << "Calling Cat copy constructor" << std::endl;
	type = old.type;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Calling Cat copy assignment constructor" << std::endl;
	if (&rhs == this)
		return (*this);
	type = rhs.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Calling Cat destructor" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow 😻" << std::endl;
}