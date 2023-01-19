/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:45 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/19 17:31:13 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>

#ifndef PHONEBOOK_h
#define PHONEBOOK_H

class PhoneBook
{
private:
	int	nbr_of_contact;
	Contact	book[8];
public:
	PhoneBook( void );
	~PhoneBook();
	void	add_contact( PhoneBook *var );
	void	search_contact( PhoneBook *var);
};
#endif