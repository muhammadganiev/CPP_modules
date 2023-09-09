/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:34:55 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
	:
	  _name("default")
{
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_equipped[i] = false;
	}
}

Character::Character(const std::string &name)
	: _name(name)
{
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_equipped[i] = false;
	}
}

Character::Character(const Character &old)
	:
	  _name(old._name)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = old._inventory[i];
		_equipped[i] = old._equipped[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	if (&rhs == this)
	{
		return (*this);
	}
	_name = rhs._name;
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = rhs._inventory[i];
		_equipped[i] = rhs._equipped[i];
	}
	return (*this);
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
}

const std::string &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_equipped[i] == false)
		{
			delete _inventory[i];
			_inventory[i] = m;
			_equipped[i] = true;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		_equipped[idx] = false;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _equipped[idx] == true)
	{
		_inventory[idx]->use(target);
	}
}