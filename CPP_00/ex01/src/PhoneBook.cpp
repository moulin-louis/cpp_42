/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:18 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/14 10:37:31 by loumouli         ###   ########.fr       */
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
	std::string	u_input;

	std::cout << "- Type is first name" << std::endl;
	std::cin >> u_input;
	var->book[var->nbr_of_contact].first_name = u_input;

	std::cout << "- Type is last name" << std::endl;
	std::cin >> u_input;
	var->book[var->nbr_of_contact].last_name = u_input;

	std::cout << "- Type is nickname" << std::endl;
	std::cin >> u_input;
	var->book[var->nbr_of_contact].nickname = u_input;

	std::cout << "- Type is phone number" << std::endl;
	std::cin >> u_input;
	var->book[var->nbr_of_contact].phone_nbr = u_input;
	
	std::cout << "- Type is darkest secret" << std::endl;
	std::cin >> u_input;
	var->book[var->nbr_of_contact].secret = u_input;
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
		
		std::cout << var->book[i].first_name.substr(0, 9);
		if (var->book[i].first_name.length() >= 10)
			std::cout << ".";
		put_space(var->book[i].first_name);
		std::cout << "|";

		std::cout << var->book[i].last_name.substr(0, 9);
		if (var->book[i].last_name.length() >= 10)
			std::cout << ".";
		put_space(var->book[i].last_name);
		std::cout << "|";

		std::cout << var->book[i].nickname.substr(0, 9);
		if (var->book[i].nickname.length() >= 10)
			std::cout << ".";
		put_space(var->book[i].nickname);
		std::cout << std::endl;
	}
	std::string	u_input;
	std::cout << "Which ID to you want to see ?" << std::endl;
	std::cin >> u_input;
	int	int_input = std::atoi(u_input.c_str());
	std::cout << var->book[int_input].first_name << std::endl;
	std::cout << var->book[int_input].last_name << std::endl;
	std::cout << var->book[int_input].nickname << std::endl;
	std::cout << var->book[int_input].phone_nbr << std::endl;
	std::cout << var->book[int_input].secret << std::endl;
	
	
}