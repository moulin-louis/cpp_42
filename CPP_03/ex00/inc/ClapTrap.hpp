/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:45:56 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/17 16:22:20 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	ClapTrap
{
private:
	std::string	name;
	int		hit_point;
	int		energy_point;
	int		attack_dmg;
public:
	ClapTrap( std::string name );
	~ClapTrap( void );
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amout);
	void	beRepaired(unsigned int amount);
	void	setDamage( int amount );
	int		return_dmg( void ) ;
};