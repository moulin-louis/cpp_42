/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:06:41 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 18:06:08 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAX_NBR 5

int main()
{
	std::cout << "TEST 1" << std::endl << std::endl;
	{	
		Span sp(MAX_NBR);
		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::range_error& mce) {
			std::cout << "Spam:" << mce.what() << std::endl;
		}
	}

	std::cout << std::endl << "Test 2..." << std::endl << std::endl;
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "Test 3..." << std::endl << std::endl;
	{
		Span sp(MAX_NBR);
		std::srand((unsigned) time(NULL));
		for(int i = 0; i < MAX_NBR; i ++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "Test 4..." << std::endl << std::endl;
	{
		Span sp(MAX_NBR);
		std::srand((unsigned) time(NULL));
		for(int i = 0; i < MAX_NBR; i ++)
			sp.addNumber(rand());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "Test 6..." << std::endl << std::endl;
	{
		Span sp(MAX_NBR);
		std::srand((unsigned) time(NULL));
		for(int i = 0; i < MAX_NBR; i ++)
			sp.addNumber(1);
		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::range_error& mce) {
			std::cout << "Spam:" << mce.what() << std::endl;
		}
		try {
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::range_error& mce) {
			std::cout << "Spam:" << mce.what() << std::endl;
		}
	}

	std::cout << std::endl << "Test 7..." << std::endl << std::endl;
	{
		Span	span1(1);
		span1.assign(5, 42);
		for (unsigned int i = 0; i < 5; i++)
			std::cout << span1[i] << std::endl;
	}

	std::cout << std::endl << "Test 8..." << std::endl << std::endl;
	{
		Span	span1(10);
		std::vector<int> temp;
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(3);
		temp.push_back(4);
		temp.push_back(5);
		temp.push_back(6);
		std::vector<int>::iterator it_b = temp.begin();
		span1.assign(it_b, temp.end());
		for (unsigned int i = 0; i < 5; i++)
			std::cout << span1[i] << std::endl;
	}
}