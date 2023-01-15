/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:06:50 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/15 18:09:23 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
typedef	struct	s_ptr_arr
{
	std::string	name;
	void(Harl::*ptr)(void);
}				ptr_arr;
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void init( void );
	ptr_arr	array[4];
public:
	void complain( std::string level );
	Harl(/* args */);
	~Harl();
	void	muting_debug(std::string level, Harl& var);
};
