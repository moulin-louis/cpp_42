/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:15:28 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/25 18:40:13 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAU_H
#define BUREAU_H

#include <iostream>
class Bureaucrat
{
private:
	const	std::string name;
	int		grade;
public:
	Bureaucrat( const std::string& name_input, const int grade_input );
	Bureaucrat( const Bureaucrat& );
	~Bureaucrat( void );
	std::string	getName( void );
	int	getGrade( void );
	Bureaucrat&	operator=(const Bureaucrat& );
};
#endif