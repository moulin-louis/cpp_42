/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:57:17 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/14 12:03:11 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account ( int initial_deposit )
{
	std::cout << "\e[1;92m" << "- Account constructor called" << "\e[0m" << std::endl;
	return ;
}

Account::Acount( void )
{
	std::cout << "\e[1;92m" << "- Account constructor called" << "\e[0m" << std::endl;
	return ;
}

Account::~Account ( void )
{
	std::cout << "\e[1;91m" << "- Account destructor called" << "\e[0m" << std::endl;
	return ;
}