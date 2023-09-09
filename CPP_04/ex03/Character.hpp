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

#ifndef CHARACTER
#define CHARACTER

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <cstddef>

class Character : public ICharacter
{
public:
    Character(void);
    Character(const std::string &name);
    Character(const Character &old);
    Character &operator=(const Character &rhs);
    ~Character(void);

    const std::string &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

private:
    AMateria *_inventory[4];
    bool _equipped[4];
    std::string _name;
};
#endif