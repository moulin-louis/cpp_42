/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:22:01 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/26 14:25:53 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUB_H
#define SHRUB_H

#include "AForm.hpp"

class ShrubberyCreationForm : public Aform
{
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm& );
	~ShrubberyCreationForm();
	void	execute( Bureaucrat const & executor );
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
};

#endif