/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:26:45 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/14 20:59:31 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie
{
private:
	std::string	name;
public:
	void	randomChump( std::string name );
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	static Zombie* newZombie( std::string name );
};