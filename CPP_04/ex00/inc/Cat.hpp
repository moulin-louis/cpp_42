/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:51:11 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/22 16:59:50 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
class	Cat: public Animal
{
public:
	Cat( void );
	Cat ( const Cat& );
	~Cat( void );
	void	makeSound( void );
	Cat&	operator=(const Cat& );
	std::string& getType( void );
};
#endif