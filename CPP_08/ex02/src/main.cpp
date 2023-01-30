/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:20:02 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/30 12:38:00 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <stack>

int main()
{

	//Default stack test
	// std::stack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// for (int i = 0; i < (int)mstack.size(); i ++)
	// {
	// 	std::cout << mstack.top() << std::endl;
	// 	mstack.pop();
	// }
	// return 0;

	//MutantStack test, check if its behave like the normal stack
	// MutantStack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// for (int i = 0; i < (int)mstack.size(); i ++)
	// {
	// 	std::cout << mstack.top() << std::endl;
	// 	mstack.pop();
	// }
	// return 0;

	//Default Test from subject, will test iterator
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Printing top of the stack : should be 17" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "Deleting the curent top of the stack" << std::endl;
	mstack.pop();
	std::cout << "Printing the size of the stack : should be 1" << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Pushing 4 object to the stack" << std::endl;
	std::cout << "creatint an it to the begin and one to the end of the stack" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "incrementing and decrementing the beging it : should not move" << std::endl;
	++it;
	--it;
	std::cout << "printing where the begint it point till the end it : should be 5 3 5 737 0" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "printing a 2n time : should be 5 3 5 737 0" << std::endl;
	it = mstack.begin();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int> stack_1;
	MutantStack<int> stack_2;
	stack_1.push(4);
	stack_1.push(3);
	stack_1.push(2);
	stack_1.push(1);
	stack_2 = stack_1;
	std::cout << "Priting stack1 : should be 1 2 3 4" << std::endl;
	for (; (int)stack_1.size();)
	{
		std::cout << stack_1.top() << std::endl;
		stack_1.pop();
	}
	std::cout << "Priting stack2 : should be 1 2 3 4" << std::endl;
	for (; (int)stack_2.size();)
	{
		std::cout << stack_2.top() << std::endl;
		stack_2.pop();
	}
	return 0;


	// std::list<int> mstack;
	// mstack.push_back(5);
	// mstack.push_back(17);
	// std::cout << *mstack.end() << std::endl;
	// mstack.pop_back();
	// std::cout << mstack.size() << std::endl;
	// mstack.push_back(3);
	// mstack.push_back(5);
	// mstack.push_back(737);
	// //[...]
	// mstack.push_back(0);
	// std::list<int>::iterator it = mstack.begin();
	// std::list<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// std::cout << *it << std::endl;
	// ++it;
	// }
	// return 0;
}