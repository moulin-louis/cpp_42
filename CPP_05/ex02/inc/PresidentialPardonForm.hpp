/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:27:20 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/26 14:28:37 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESID_H
#define PRESID_H

#include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm(const PresidentialPardonForm& );
	void	execute( Bureaucrat const & executor );
	~PresidentialPardonForm( void );
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& );
};
#endif