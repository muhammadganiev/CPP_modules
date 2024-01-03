/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:12:25 by mkhan             #+#    #+#             */
/*   Updated: 2023/05/30 14:54:36 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>

class Span
{
	private:
		unsigned int		_max;
		std::vector<int>	_vec;
		
		class	ContainerEmptyException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class	ContainerMaxException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &object);
		Span & operator=(Span const &rhs);
		~Span();

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		void	addMoreNum(int size);
};

#endif