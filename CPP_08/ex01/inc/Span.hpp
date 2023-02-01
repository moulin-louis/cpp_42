/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:57:55 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 13:11:55 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>


class Span
{
private:
	const unsigned int		max_val;
	unsigned int		crt_nbr_val;
	std::vector<int>	stock;
	Span( void );
public:
	Span( const unsigned int& max_input );
	Span( const Span& );
	~Span( void );
	int		shortestSpan( void );
	int		longestSpan( void );
	void	addNumber( const int& input );
	void	assign(const unsigned int& nbr_assign, const unsigned int& val);
	void	assign( std::vector<int>::iterator& it_b, const std::vector<int>::iterator& it_e);
	Span&	operator=(const Span& );
	int&	operator[]( unsigned int range);
};
#endif