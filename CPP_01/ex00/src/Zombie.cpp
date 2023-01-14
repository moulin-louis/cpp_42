/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:26:50 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/14 21:00:26 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::~Zombie( void )
{
	std::cout << this->name << "destroy" << std::endl;
	return ;
}

Zombie* Zombie::newZombie( std::string name )
{
	Zombie* result = new Zombie;
	result->name = name;
	return (result);
}

void randomChump( std::string name )
{
	(void)name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}