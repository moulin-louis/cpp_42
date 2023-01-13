/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:33:20 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 14:37:01 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; av[i]; i++)
	{
		std::string str = av[i];
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str << " ";
		
	}
	std::cout << std::endl;
	return (0);
}