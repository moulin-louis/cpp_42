/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:15:33 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:44:34 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	{
	ClapTrap	perso1("Perso1");
	ClapTrap	perso2("Perso2");

	perso1.attack("Perso2");
	perso2.takeDamage(perso1.return_dmg());
	perso1.set_damage(2);
	perso1.attack("Perso2");
	perso2.takeDamage(perso1.return_dmg());
	}
	std::cout << std::endl;
	std::cout << "New Test" << std::endl;
	std::cout << std::endl;
	{
		ClapTrap	perso1("Perso1");
		ScavTrap	perso2("Perso2");
		perso1.attack("Perso2");
		perso2.takeDamage(perso1.return_dmg());
		perso1.set_damage(2);
		perso1.attack("Perso2");
		perso2.takeDamage(perso1.return_dmg());
		perso2.attack("Perso2");
		perso1.takeDamage(perso2.return_dmg());
		perso2.guardGate();
	}
	std::cout << std::endl;
	std::cout << "New Test" << std::endl;
	std::cout << std::endl;
	{
		ScavTrap perso1("Perso1");
		FragTrap perso2("Perso2");
		perso2.highFiveGuys();
		perso2.attack("Perso1");
		perso1.takeDamage(perso2.return_dmg());
		perso1.attack("Perso2");
		perso2.takeDamage(perso1.return_dmg());
	}
}