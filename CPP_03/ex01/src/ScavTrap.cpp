/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:34:14 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:22:06 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->set_name(name);
	this->set_hitpoint(100);
	this->set_energy(50);
	this->set_damage(20);
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string& name )
{
	if (this->return_energy() > 0)
	{
		if (this->return_dmg() <= 0)
		{
			std::cout << this->return_name() << " cant attack cause he would deal 0 dammage" << std::endl;
			return ;
		}
		std::cout << this->return_name() << " attacks " << name << ", dealing ";
		std::cout << this->return_dmg() << " damage!" << std::endl;
		return ;
	}
	std::cout << this->return_name() << " have 0 energy." << std::endl;
	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->return_name() << " is now protecting the gate" << std::endl;
	return ;
}