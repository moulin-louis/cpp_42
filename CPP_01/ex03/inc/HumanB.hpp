/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:41:26 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/15 16:46:07 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Weapon.hpp"
#endif

class HumanB
{
private:
	std::string	name;
	Weapon* weapon;
public:
	HumanB( std::string name, Weapon& weapon );
	HumanB( std::string name );
	~HumanB( void );
	void	attack( void );
	void	setWeapon( Weapon& weapon );
};