/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:45:56 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:18:07 by loumouli         ###   ########.fr       */
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
	ClapTrap( void );
	ClapTrap( std::string name );
	~ClapTrap( void );
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amout);
	void	beRepaired(unsigned int amount);
	//fn to set private member
	void	set_hitpoint( int amount );
	void	set_energy( int amount );
	void	set_damage( int amount );
	void	set_name(std::string name);
	//fn to return value of private member
	std::string&	return_name( void );
	int		return_dmg( void );
	int		return_energy( void );
	int		return_hit( void );
};