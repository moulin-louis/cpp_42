/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:08:04 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 12:05:52 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

class Awesome
{
public:
	Awesome( void ): _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};
std::ostream & operator<< (std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o; }

template<typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
template <typename T>
void	print_arr( const T& a) { std::cout << a << std::endl; }

int	main( void )
{
	{
		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
		Awesome tab2[5];
		iter( tab, 5, print);
		iter( tab2, 5, print);
	}
	int *temp;
	temp = new int[7];
	temp[0] = 0;
	temp[1] = 1;
	temp[2] = 2;
	temp[3] = 3;
	temp[4] = 4;
	temp[5] = 5;
	temp[6] = 6;
	iter(temp, 7, print_arr);
	try {
		iter((int *)NULL, 7, print_arr);
	}
	catch (std::exception& mce)
	{
		std::cout << "iter: " << mce.what() << std::endl;
		return 1;
	}
	delete[] temp;
	return (0);
}