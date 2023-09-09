/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/09 15:14:00 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
#define ICE

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
public:
    Ice(void);

    Ice(const Ice &old);
    Ice &operator=(const Ice &rhs);
    ~Ice(void);

    AMateria *clone(void) const;
    void use(ICharacter &target);
};
#endif