/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:04:31 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 12:01:28 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <exception>

template <typename T>
void	iter(T* arr, int arr_size, void (*fnct)(const T&))
{
	if (!arr)
		throw std::invalid_argument("array is null");
	for (int i = 0; i < arr_size	; i ++)
		fnct(arr[i]);
}
#endif