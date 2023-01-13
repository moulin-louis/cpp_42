/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:18 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 17:25:43 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void )
{
	std::cout << "\e[1;36m" << "- PhoneBook constructor called" << "\e[0m" << std::endl;
	this->nbr_of_contact = 0;
	return ;
}

PhoneBook::~PhoneBook ( void )
{
	std::cout << "\e[1;34m" << "- Phonebook destructor called" << "\e[0m" << std::endl;
	return ;
}

void	PhoneBook::add_contact( void )
{
	std::string	u_input;

	std::cout << "Type is first name" << std::endl;
	std::cin >> u_input;
	this->book[this->nbr_of_contact] = u_input;
}

void	PhoneBook::search_contact( void )
{
	std::cout << "test" << std::endl;
}