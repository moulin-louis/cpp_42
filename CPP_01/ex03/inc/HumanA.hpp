/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:33:10 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/15 16:23:14 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Weapon.hpp"
#endif

class HumanA
{
private:
	std::string	name;
	Weapon*	weapon;
public:
	HumanA( std::string, Weapon& weapon );
	~HumanA( void );
	void	attack( void );
};