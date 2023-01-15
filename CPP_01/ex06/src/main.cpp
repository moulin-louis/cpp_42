/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:22:30 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/15 18:10:21 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong nbr of args" << std::endl;
		std::cout << "./harlFilter <minimun_level_info>" << std::endl;
		return (1);
	}
	std::string input = av[1];
	if (input.compare("DEBUG") != 0 && input.compare("INFO") != 0
		&& input.compare("WARNING") != 0 && input.compare("ERROR") != 0)
	{
		std::cout << "Wrong level of debug" << std::endl;
		std::cout << "Can be : DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	Harl	temp;
	temp.muting_debug(input, temp);
	std::cout << "Displaying debug message..." << std::endl;
	temp.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Displaying info message..." << std::endl;
	temp.complain("INFO");
	std::cout << std::endl;
	std::cout << "Displaying warning message..." << std::endl;
	temp.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Displaying error message..." << std::endl;
	temp.complain("ERROR");
	return (0);
}