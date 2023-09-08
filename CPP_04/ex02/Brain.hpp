/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:13:46 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
#define BRAIN

#include <string>
#include <iostream>
#include <cstdlib>

class Brain
{
public:
	Brain(void);
	Brain(const Brain &old);
	Brain &operator=(const Brain &rhs);
	~Brain(void);

	void	printFiveThoughts(void) const;
private:
	std::string ideas[100];
	static const std::string ideaList[];
};

#endif