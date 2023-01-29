/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:21:16 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/29 17:32:28 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANT_H
#define MUTANT_H

#include <stack>
template	<typename T>
class	MutantStack : public std::stack<T>
{
private:
	const int	size_type;
class	iterator {
		iterator( void );
		iterator( const iterator& );
		~iterator( void );
		iterator&	operator=( const iterator& );
		//Overload incre/decremnt operators
		iterator&	operator++( void );
		iterator	operator++(int);
		iterator&	operator--( void );
		iterator	operator--(int);

};
	iterator&	begin( void );
	iterator&	end( void );
};	
#endif