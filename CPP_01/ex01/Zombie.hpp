/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:30:10 by muganiev          #+#    #+#             */
/*   Updated: 2023/08/08 20:31:27 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <algorithm>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void		setName(std::string Name);
	std::string	getName() const;
	void		announce();
};

Zombie	*zombieHorde(int N, std::string name);

#endif
