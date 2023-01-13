/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:45 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 17:23:52 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
private:
	int	nbr_of_contact;
public:
	Contact	book[8];
	PhoneBook( void );
	~PhoneBook();
	static	void	add_contact( void );
	static 	void	search_contact( void );
};

