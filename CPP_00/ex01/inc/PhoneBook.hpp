/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:42:45 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/13 22:17:51 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>

class PhoneBook
{
private:
public:
	int	nbr_of_contact;
	Contact	book[8];
	PhoneBook( void );
	~PhoneBook();
	void	add_contact( PhoneBook *var );
	void	search_contact( PhoneBook *var);
};

