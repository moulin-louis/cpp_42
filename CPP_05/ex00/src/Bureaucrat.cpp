/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:31:28 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/25 18:40:15 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string& name_input, const int grade_input )
{
	this->grade = grade_input;
	this->name = name_input;
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& var )
{
	this->grade = var.grade;
	std::cout << "Bureaucrat constructor by copy called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
	return ;
}

int	Bureaucrat::getGrade( void ) { return(this->grade); }
std::string	Bureaucrat::getName( void ) { return(this->name); }

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& var )
{
	this->grade = var.grade;
	std::cout << "Bureaucrat assignation called" << std::endl;
	return (*this);
}