/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:45:42 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 12:07:11 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iostream>

class Awesome
{
private:
	int _n;
public:
	Awesome(void): _n(0) { }
	Awesome(int n): _n(n) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); }
	bool operator<<( Awesome const & rhs) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }


int main( void ) {
	{
		Awesome a(2), b(4);
		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << max(a, b) << std::endl;
	}
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "on swap" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "on swap" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}