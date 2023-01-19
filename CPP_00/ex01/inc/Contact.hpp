/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:42 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 17:30:52 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CONTACT_H
#define CONTACT_H
class Contact
{
private:
	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nbr;
	std::string	secret;
public:
	Contact( void );
	~Contact( void );
	std::string	return_first_name( void );
	std::string	return_last_name( void );
	std::string	return_nickname( void );
	std::string	return_phone_nbr( void );
	std::string	return_secret( void );
	void		set_contact( void );

};
#endif