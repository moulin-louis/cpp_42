/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:25:42 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:44:08 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string& name )
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->set_name(name);
	this->set_hitpoint(100);
	this->set_energy(100);
	this->set_damage(30);
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap default destructor called" << std::endl;
	return ;
}

void	FragTrap::highFiveGuys( void )
{
	std::cout << "FragTrap " << this->return_name() << " request a high five and got one !" << std::endl;
	return ;
}