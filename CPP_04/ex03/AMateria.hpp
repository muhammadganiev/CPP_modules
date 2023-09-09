/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/09 15:14:04 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
#define AMATERIA

#include "ICharacter.hpp"
#include <iostream>
#include <string>
class ICharacter;

class AMateria
{
protected:
    std::string materiaType;

public:
    AMateria(void);
    AMateria(const std::string &type);

    AMateria(const AMateria &old);
    AMateria &operator=(const AMateria &rhs);
    virtual ~AMateria(void);

    const std::string &getType(void) const;

    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);
};
#endif