/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:59:52 by muganiev          #+#    #+#             */
/*   Updated: 2023/08/26 12:01:24 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <iostream>

// classes

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
	// Constructors
		Fixed();
		Fixed(const Fixed& copy);

	// Deconstructors
		~Fixed();

	// Overloaded Operators
		Fixed &operator=(const Fixed &src);

	// Public Methods

	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(int const raw);

};
