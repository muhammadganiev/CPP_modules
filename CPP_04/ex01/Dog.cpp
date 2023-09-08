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

#include "Dog.hpp"

Dog::Dog(void)
	: brain(new Brain)

{
	std::cout << "Calling default Dog constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &old)
	: Animal(old)
{
	std::cout << "Calling Dog copy constructor" << std::endl;
	brain = new Brain(*old.brain);
	type = old.type;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Calling Dog copy assignment constructor" << std::endl;
	if (&rhs == this)
		return (*this);
	brain = new Brain(*rhs.brain);
	type = rhs.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Calling Dog destructor" << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Bork 🐶" << std::endl;
}

void Dog::printThoughts(void) const
{
	brain->printFiveThoughts();
}