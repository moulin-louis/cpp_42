/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:32:01 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:12:47 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
public:
	ScavTrap( std::string name );
	~ScavTrap( void );
	void	attack(const std::string& Name );
	void	guardGate( void );
};