/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:25:54 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/26 14:27:19 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOT_H
#define ROBOT_H

#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( const RobotomyRequestForm& );
	void	execute( Bureaucrat const & executor );
	RobotomyRequestForm&	operator=( const RobotomyRequestForm& );
	~RobotomyRequestForm();
};
#endif