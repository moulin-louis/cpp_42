/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:05:55 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/23 15:28:53 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define NBR_ANIMALS 4

int main()
{
	const Animal* ptr[NBR_ANIMALS];
	Brain* brain_ptr;
	for (int i = 0; i < NBR_ANIMALS; i++)
	{
		if (i % 2)
			ptr[i] = new Cat();
		else
			ptr[i] = new Dog();
	}
	std::cout << std::endl << "Constructor done..." << std::endl << std::endl;
	brain_ptr = ptr[0]->get_brain();
	brain_ptr->ideas[0] = "Food";
	brain_ptr->ideas[1] = "Slepp";

	Dog temp;
	Dog temp1 ( *(Dog *)ptr[0]);
	std::cout << std::endl;
	temp = temp1;
	std::cout << std::endl;
	const Brain* brain_ptr2 = temp.get_brain();

	std::cout << "idea 0 of Dog1 is " <<  brain_ptr->ideas[0] << std::endl;
	std::cout << "idea 0 of Dog2 is " <<  brain_ptr2->ideas[0] << std::endl;
	brain_ptr->ideas[0] = "Sleep";
	std::cout << "Setting idea 0 of Dog1 to Slepp" << std::endl;
	std::cout << "idea 0 of Dog1 is " <<  brain_ptr->ideas[0] << std::endl;
	std::cout << "idea 0 of Dog2 is " <<  brain_ptr2->ideas[0] << std::endl;
	std::cout << std::endl << "Calling destructor" << std::endl << std::endl;
	for (int i = 0; i < NBR_ANIMALS; i++)
		delete ptr[i];
	return 0;
}