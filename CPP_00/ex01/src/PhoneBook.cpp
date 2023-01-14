/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:18 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/14 11:41:46 by loumouli         ###   ########.fr       */
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

void	PhoneBook::add_contact( PhoneBook *var )
{
	var->book[var->nbr_of_contact].set_contact();
	var->nbr_of_contact++;
	if (var->nbr_of_contact == 8)
		var->nbr_of_contact = 0;
	return ;
}

void	put_space(const std::string &str)
{
	if (str.length() < 10)
	{
		int x = 10 - str.length();
		while (x--)
			std::cout << " ";
	}
	return ;
}

void	PhoneBook::search_contact( PhoneBook *var )
{
	for (int i = 0; i < var->nbr_of_contact; i++)
	{
		std::cout << i << "         " << "|";
		
		std::cout << var->book[i].return_first_name().substr(0, 9);
		if (var->book[i].return_first_name().length() >= 10)
			std::cout << ".";
		put_space(var->book[i].return_first_name());
		std::cout << "|";

		std::cout << var->book[i].return_last_name().substr(0, 9);
		if (var->book[i].return_last_name().length() >= 10)
			std::cout << ".";
		put_space(var->book[i].return_last_name());
		std::cout << "|";

		std::cout << var->book[i].return_nickname().substr(0, 9);
		if (var->book[i].return_nickname().length() >= 10)
			std::cout << ".";
		put_space(var->book[i].return_nickname());
		std::cout << std::endl;
	}
	std::string	u_input;
	if (var->nbr_of_contact == 0)
		return ;
	std::cout << "Which ID to you want to see ?" << std::endl;
	std::cin >> u_input;
	int	int_input = std::atoi(u_input.c_str());
	if (int_input < 0 || int_input > var->nbr_of_contact)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	std::cout << var->book[int_input].return_first_name() << std::endl;
	std::cout << var->book[int_input].return_last_name() << std::endl;
	std::cout << var->book[int_input].return_nickname() << std::endl;
	std::cout << var->book[int_input].return_phone_nbr() << std::endl;
	std::cout << var->book[int_input].return_secret() << std::endl;
	
	
}