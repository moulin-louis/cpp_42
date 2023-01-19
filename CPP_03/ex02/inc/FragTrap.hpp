/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:23:19 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 13:40:33 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string& name);
	~FragTrap( void );
	void	highFiveGuys( void );
};
#endif