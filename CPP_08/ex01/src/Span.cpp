/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:07:02 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 13:19:22 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : max_val(0)
{
	std::cout << "Span default constructor called" << std::endl;
	return ;
}

Span::Span( const unsigned int& max_input) : max_val(max_input)
{
	std::cout << "Span constructor called" << std::endl;
	this->crt_nbr_val = 0;
	return ;
}

Span::Span( const Span& var ) : max_val(var.max_val)
{
	std::cout << "Span constructor by copy called" << std::endl;
	this->stock = var.stock;
	this->crt_nbr_val = var.crt_nbr_val;
	return ;
}

Span::~Span( void )
{
	std::cout << "Span default destructor called" << std::endl;
	return ;
}

int	inverse_neg(int x ) {
	if (x < 0)
		x = -x;
	return (x);
}

int	Span::shortestSpan( void )
{
	if (this->stock.empty())
		throw std::range_error("vector is empty");

	std::vector<int> temp = this->stock;
	std::adjacent_difference(temp.begin(), temp.end(), temp.begin());
	temp.erase(temp.begin());
	std::transform(temp.begin(), temp.end(), temp.begin(), inverse_neg);
	std::sort(temp.begin(), temp.end());
	if (*temp.begin() == 0)
		throw std::range_error("cant find any distance");
	return (*temp.begin());
}

int	Span::longestSpan( void )
{
	if (this->stock.empty())
		throw std::range_error("vector is empty");

	std::vector<int> temp = this->stock;
	std::adjacent_difference(temp.begin(), temp.end(), temp.begin());
	temp.erase(temp.begin());
	std::transform(temp.begin(), temp.end(), temp.begin(), inverse_neg);
	std::sort(temp.begin(), temp.end());
	if (temp[temp.size() - 1] == 0)
		throw std::range_error("cant find any distance");
	return (temp[temp.size() - 1]);
}

void	Span::addNumber(const int& input)
{
	if (this->crt_nbr_val == this->max_val)
		throw std::range_error("Cant add more numbers");
	this->stock.push_back(input);
	this->crt_nbr_val++;
}	

void	Span::assign( const unsigned int& nbr_assign, const unsigned int& val)
{
	for (unsigned int i = 0; i < nbr_assign; i++)
		this->stock.push_back(val);
}

void	Span::assign(std::vector<int>::iterator& it_b, const std::vector<int>::iterator& it_e)
{
	for( unsigned int i = 0; 1; i++)
	{
		if (it_b == it_e)	
			break ;
		this->stock[i] = *it_b;
		it_b++;
	}
}

Span&	Span::operator=(const Span& var)
{
	std::cout << "Span: cant do assignation caus of const attributes" << std::endl;
	(void)var;
	return (*this);
}

int&	Span::operator[]( const unsigned int range)
{
	if (range < 0)
		throw std::range_error("out of bond range: too low");
	if (range > this->stock.size())
		throw std::range_error("out of bond range: too high");
	return (this->stock[range]);
}