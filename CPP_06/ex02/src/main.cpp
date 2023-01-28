/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:16:33 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/28 16:30:19 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <exception>

Base*	generate( void )
{
	std::srand((unsigned) time(NULL));
	int random = rand()	% 3;
	if (random == 0)
	{
		std::cout << "Create A Class" << std::endl;
		return (new A);
	}
	else if (random == 1)
	{
		std::cout << "Create B Class" << std::endl;
		return (new B);
	}
	std::cout << "Create C Class" << std::endl;
	return (new C);
}

void	identify(Base* ptr)
{
	void *temp = dynamic_cast<A *>(ptr);
	if (temp)
	{
		std::cout << "Class is type A" << std::endl;
		return ;
	}
	temp = dynamic_cast<B *>(ptr);
	if (temp)
	{
		std::cout << "Class is type B" << std::endl;
		return ;
	}
	temp = dynamic_cast<C *>(ptr);
	if (temp)
	{
		std::cout << "Class is type C" << std::endl;
		return ;
	}
}

void	identify(Base& ref)
{
	try {
		A temp = dynamic_cast<A&>(ref);
		std::cout << "Class is type A" << std::endl;
	}
	catch (std::exception& mce)
	{ }
	try {
		B temp = dynamic_cast<B&>(ref);
		std::cout << "Class is type B" << std::endl;
	}
	catch (std::exception& mce)
	{ }
	try {
		C temp = dynamic_cast<C&>(ref);
		std::cout << "Class is type C" << std::endl;
	}
	catch (std::exception& mce)
	{ }
}

int	main( void )
{
	Base* temp = generate();
	identify(temp);
	identify(*temp);
	delete temp;
}