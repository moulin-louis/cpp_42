/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:57:55 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 12:12:54 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 8
int main(int, char**)
{
    {
        const Array<int> my_arr(MAX_VAL);
        for (int i = 0; i < MAX_VAL; i ++)
            std::cout << my_arr[i] << std::endl;
    }
    Array<int> my_arr(MAX_VAL);
    int* off_arr = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        my_arr[i] = value;
        off_arr[i] = value;
    }
	// //SCOPE
	{
		Array<int> tmp;
		tmp = my_arr;
	    Array<int> test(tmp);
	}

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (off_arr[i] != my_arr[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        my_arr[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        my_arr[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        my_arr[i] = rand();
    }
   	delete [] off_arr;//
    // return 0;
}