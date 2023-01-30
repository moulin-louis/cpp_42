/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:21:16 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/30 12:11:55 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANT_H
#define MUTANT_H

#include <stack>
#include <iostream>
template	<typename T>
class	MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin( void ) { return(this->c.begin()); };
	iterator	end( void ) { return(this->c.end()); };
};	
#endif