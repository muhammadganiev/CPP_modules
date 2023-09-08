/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:40:13 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Calling default Brain constructor" << std::endl;
	srand(time(0));
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = ideaList[rand() % 15];
	}
}

Brain::Brain(const Brain &old)
{
	std::cout << "Calling Brain copy constructor" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = old.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Calling Brain copy assignment constructor" << std::endl;
	if (&rhs == this)
	{
		return (*this);
	}
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Calling Brain destructor" << std::endl;
}

void Brain::printFiveThoughts(void) const
{
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << ideas[i] << std::endl;
	}
}

const std::string Brain::ideaList[] = {
	"Animals produce 30 times more waste than humans, totaling 1.4 billion tons annually.",
	"Ants are perpetual wakeful creatures and do not possess lungs."
	"A gathering of owls is referred to as a parliament."
	"A woodpecker can strike 20 times per second."
	"Reindeer milk contains a higher fat content compared to cow milk."
	"Elephants have the ability to detect water from a distance of up to 3 miles."
	"A whale's heart maintains a mere nine beats per minute."
	"When born, a panda is tinier than a mouse, weighing just about four ounces."
	"Taurophobia represents the dread of bulls."
	"The New York City metropolitan area is home to over one million stray dogs and 500,000 stray cats."
	"Hippo perspiration possesses a pink hue."
	"Flamingos' pink coloration is attributed to their primary diet of shrimp."
	"Cats have the capacity to hear ultrasound."
	"In the United States, more than 45 million turkeys are prepared and consumed during Thanksgiving."
	"Individuals who own cats are 30% less likely to experience a heart attack."};