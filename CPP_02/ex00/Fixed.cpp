/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:59:54 by muganiev          #+#    #+#             */
/*   Updated: 2023/08/26 12:01:22 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

// Constructors
Fixed::Fixed(): _fp_value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Overloaded Operators
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fp_value = src.getRawBits();

	return *this;
}

// Public Methods

// Getter
	int	Fixed::getRawBits(void)const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_fp_value);
	}

// Setter
	void	Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		this->_fp_value = raw;
	}
