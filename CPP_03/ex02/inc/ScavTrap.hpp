/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:32:01 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:37:26 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#ifndef SCAVTRAP_H
#define SCAVTRAP_H
class	ScavTrap: public ClapTrap
{
public:
	ScavTrap( std::string name );
	~ScavTrap( void );
	void	attack(const std::string& Name );
	void	guardGate( void );
};
#endif