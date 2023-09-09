/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/09 15:14:04 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	materiaType = "default";
}

AMateria::AMateria(const std::string &type)
{
	materiaType = type;
}

AMateria::AMateria(const AMateria &old)
{
	materiaType = old.materiaType;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria::~AMateria(void)
{
}

const std::string &AMateria::getType() const
{
	return (materiaType);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}