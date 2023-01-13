/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:42 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 17:11:08 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
public:
	Contact( void );
	~Contact( void );
	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nbr;
	std::string	secret;
};

