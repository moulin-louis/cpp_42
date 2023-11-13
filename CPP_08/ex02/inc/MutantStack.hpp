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
#include <vector>
#include <deque>

template	<typename T, typename Y>
class	MutantStack : public std::stack<T, Y> {
public:
	typedef typename std::stack<T, Y>::container_type::iterator iterator;
  typedef typename std::stack<T, Y>::container_type ::const_iterator const_iterator;
	iterator	begin() { return(this->c.begin()); };
	iterator	end() { return(this->c.end()); };
  const_iterator begin() const { return(this->c.begin()); };
  const_iterator end() const { return(this->c.end()); };
};
#endif