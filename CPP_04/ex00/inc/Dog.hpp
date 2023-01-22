/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:53:00 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/22 16:59:38 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
class Dog : public Animal
{
public:
	Dog( void );
	Dog( const Dog& );
	~Dog( void );
	void	makeSound( void );
	std::string& getType( void );
	Dog&	operator=(const Dog& );
};
#endif