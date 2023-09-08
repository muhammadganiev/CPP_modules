/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:06:30 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/02 13:24:03 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ted("ted");
	FragTrap tod("tod");
	ted.attack("tod");
	ted.attack("tod");
	ted.attack("tod");
	tod.beRepaired(20);
	tod.beRepaired(20);
	tod.attack("ted");
	tod.highFivesGuys();
}