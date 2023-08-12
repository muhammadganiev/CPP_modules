/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:10 by muganiev          #+#    #+#             */
/*   Updated: 2023/08/08 20:30:10 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Caller" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor Caller" << std::endl;
}

void	Zombie::announce()
{
	std::cout << getName() << ": Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::getName() const
{
	return (this->name);
}

void	Zombie::setName(std::string Name)
{
	this->name = Name;
}