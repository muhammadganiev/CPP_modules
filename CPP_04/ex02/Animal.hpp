/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:39:35 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal
{
public:
    Animal(void);
    Animal(const Animal &old);
    Animal &operator=(const Animal &rhs);
    virtual ~Animal(void);

    virtual void makeSound(void) const = 0;
    const std::string &getType(void) const;

protected:
    std::string type;
};
#endif