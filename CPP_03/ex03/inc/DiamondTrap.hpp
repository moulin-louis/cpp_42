/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:46:57 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 17:13:53 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef DIAMONDTRAP_H
#define DIAMONTRAP_h
class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
protected:
		std::string	name;
	int		hit_point;
	int		energy_point;
	int		attack_dmg;
public:
	DiamondTrap( void );
	DiamondTrap(const std::string& input);
	~DiamondTrap( void );
	void	whoAmI( void );
	using ScavTrap::attack;
};
#endif