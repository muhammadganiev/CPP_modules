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

#ifndef CURE
#define CURE

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
    Cure(void);

    Cure(const Cure &old);
    Cure &operator=(const Cure &rhs);
    ~Cure(void);

    AMateria *clone(void) const;
    void use(ICharacter &target);
};
#endif