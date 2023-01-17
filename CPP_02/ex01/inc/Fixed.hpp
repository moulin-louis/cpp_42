/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:00:04 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/17 12:24:31 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	value;
	static	const	int	nbr_fract_bits = 8;
	friend std::ostream & operator<<(std::ostream& os, const Fixed& var);
public:
	Fixed( void );
	Fixed( const int i);
	Fixed( const double i);
	Fixed ( const Fixed&);
	~Fixed();
	int		getRawBits( void );
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	Fixed& operator=(const Fixed *var);
};
