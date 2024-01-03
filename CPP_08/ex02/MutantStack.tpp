/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:33:27 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/09 17:54:47 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template< typename T >
MutantStack<T>::MutantStack()
{}

template< typename T >
MutantStack<T>::MutantStack(MutantStack const &object)
{
	*this = object;
}

template< typename T >
MutantStack<T> & MutantStack<T>::operator=(MutantStack const &rhs)
{
	if (this != rhs)
		this->c = rhs.c;
	return(*this);
}

template< typename T >
MutantStack<T>::~MutantStack()
{}

template< typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template< typename T >
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template< typename T >
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template< typename T >
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

#endif