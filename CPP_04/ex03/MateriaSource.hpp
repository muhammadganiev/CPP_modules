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

#ifndef MATERIA_SOURCE
#define MATERIA_SOURCE

#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &old);
    MateriaSource &operator=(const MateriaSource &rhs);
    ~MateriaSource(void);

    void learnMateria(AMateria *materia);
    AMateria *createMateria(const std::string &type);

private:
    AMateria *_learnedMateria[4];
    unsigned int _materiaIdx;
};
#endif