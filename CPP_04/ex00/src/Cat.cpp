/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:58:21 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/22 17:00:08 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat( const Cat& var )
{
	this->type = var.type;
	std::cout << "Cat constructor by copy called" << std::endl;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

void	Cat::makeSound( void )
{
	std::cout << "wouaf wouaf" << std::endl;
}

Cat&	Cat::operator=( const Cat& var )
{
	this->type = var.type;
	std::cout << "Cat constructor by assignation called" << std::endl;
	return (*this);
}

std::string& Cat::getType( void ) { return(this->type); }
