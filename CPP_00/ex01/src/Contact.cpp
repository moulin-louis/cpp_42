/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:15 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 22:10:47 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact ( void )
{
	std::cout << "\e[1;92m" << "- Contact constructor called" << "\e[0m" << std::endl;
	return ;
}

Contact::~Contact ( void )
{
	std::cout << "\e[1;91m" << "- Contact destructor called" << "\e[0m" << std::endl;
	return ;
}
