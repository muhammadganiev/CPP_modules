/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:06:30 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/02 13:23:51 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("ClapTrap");
	ClapTrap	b(a);
	ClapTrap	c;

	c = b;
	a.attack("b");
	b.takeDamage(9);
	b.beRepaired(100);
	c.attack("a");
	a.takeDamage(10);
	a.beRepaired(5);
	return (0);
}