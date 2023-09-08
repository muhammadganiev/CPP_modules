/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:06:30 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/02 13:23:56 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap ted("ted");
	ScavTrap tod("tod");
	ted.attack("tod");
	ted.attack("tod");
	ted.attack("tod");
	tod.beRepaired(10);
	tod.beRepaired(10);
	tod.attack("ted");
	tod.guardGate();
}