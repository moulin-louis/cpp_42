/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:27:27 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 17:14:21 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& input )
{
	ClapTrap::set_name(input + "_clap_name");
	this->name = input;
	this->hit_point = FragTrap::return_hit();
	this->attack_dmg = FragTrap::return_dmg();
	this->energy_point = ScavTrap::return_energy();
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap defaultr destructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My DiamondTrap name is " << this->name << " and my ClapTrap name is " << ClapTrap::return_name() << std::endl;
}