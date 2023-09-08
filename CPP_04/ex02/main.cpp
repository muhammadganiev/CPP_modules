/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:31:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/09/08 21:33:56 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Dog* chris = new Dog();
	const Cat* jinx = new Cat();

	jinx->makeSound();
	chris->makeSound();
	chris->printThoughts();
	const Dog chris2 = *chris;
	delete chris;
	Dog chris3 = chris2;
	chris2.printThoughts();
	chris3.printThoughts();
	jinx->printThoughts();
	delete jinx;
	return 0;
}