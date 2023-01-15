/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:28:20 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/15 16:15:16 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon( std::string type );
	Weapon( void );
	~Weapon();
	const std::string getType();
	void	setType(std::string type);
};
