/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:47 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 17:14:22 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook my_phone;

	while (1)
	{
		std::string user_input;

		std::cout << "Possible action : ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Type our action..." << std::endl;
		std::cin >> user_input;
		if (user_input.compare("ADD") == 0)
			my_phone.add_contact();
		else if (user_input.compare("SEARCH") == 0)
			my_phone.search_contact();
		else if (user_input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "invalid option" << std::endl;
	}
}