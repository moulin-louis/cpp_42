/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:54:22 by loumouli          #+#    #+#             */
/*   Updated: 2023/01/28 10:50:41 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASY_H
#define EASY_H

#include <stdexcept>
#include <vector>
#include <list>
#include <deque>
#include <iostream>


template <typename T>
int	easyfind(T const& container, int find)
{
	if (container.empty())
		throw std::invalid_argument("List is empty");
	typename T::const_iterator it = container.begin();
	while(it != container.end())
	{
		if (*it == find)
		{
			return (*it);
		}
		it++;
	}
	throw std::invalid_argument("Cant find the value");
}

#endif