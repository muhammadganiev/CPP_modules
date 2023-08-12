/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:10 by muganiev          #+#    #+#             */
/*   Updated: 2023/08/08 20:38:25 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	N = 5;
	Zombie	*horde = zombieHorde(N, "Muha");
	if (horde == NULL)
		return (1);
	delete [] horde;
	return (0);
}
