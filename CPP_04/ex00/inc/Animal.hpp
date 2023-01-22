/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:38:27 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/22 16:59:34 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class	Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal( const Animal& );
	~Animal( void );
	virtual void makeSound( void ) const;
	std::string getType( void )  const;
	Animal& operator=(const Animal& );
};
#endif