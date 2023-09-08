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

#ifndef WRONG_ANIMAL
#define WRONG_ANIMAL

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& old);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal(void);

	void makeSound(void) const;
	const std::string& getType(void) const;
protected:
	std::string type;
};
#endif