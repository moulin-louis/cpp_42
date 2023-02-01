/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loumouli <loumouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:25:53 by loumouli          #+#    #+#             */
/*   Updated: 2023/02/01 12:15:52 by loumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>
template	<class T> class Array {
private:
	T*	ptr;
	unsigned int	size_arr;
public:
	Array( void );
	Array( unsigned int size );
	Array( Array&);
	~Array( void );
	int	size( void ) const;
	Array<T>&	operator=( const Array<T>& );
	T&	operator[]( unsigned int i );
	T	operator[]( unsigned int i ) const;
};

template	<typename T>
Array<T>::Array( void )
{
	//std::cout << "Array default constructor called" << std::endl;
	this->ptr = new T[0];
	this->size_arr = 0;
	return ;
}

template	<typename T>
Array<T>::Array( unsigned int size )
{
	//std::cout << "Array default constructor called" << std::endl;
	this->ptr = new T[size];
	this->size_arr = size;
	for (unsigned int i = 0; i < size; i++)
		this->ptr[i] = 0;
	return ;
}

template	<typename T>
Array<T>::Array( Array& var )
{
	std::cout << "Array constructor by copy called" << std::endl;
	this->ptr = new T[var.size()];
	for (int i = 0; i < var.size(); i++)
		this->ptr[i] = var.ptr[i];
	return ;
}

template	<typename T>
Array<T>::~Array ( void )
{
	delete[] this->ptr;
	//std::cout << "Array default destructor called" << std::endl;
	return ;
}

template	<typename T>
int Array<T>::size( void ) const { return(this->size_arr); }

template	<typename T>
Array<T>&	Array<T>::operator=( const Array& var )
{
	std::cout << "Array assignation called" << std::endl;
	delete[] this->ptr;
	this->ptr = new T[var.size()];
	this->size_arr = var.size();
	for (int i = 0; i < var.size(); i++)
		this->ptr[i] = var.ptr[i];
	return (*this);
}

template	<typename T>
T&	Array<T>::operator[]( unsigned int i )
{
	if (i >= this->size_arr)
		throw std::range_error("Out of range index: too big");
	if (i < 0)
		throw std::range_error("Out of range index: too low");
	return (this->ptr[i]);
}

template	<typename T>
T	Array<T>::operator[]( unsigned int i ) const
{
	if (i >= this->size_arr)
		throw std::range_error("Out of range index: too big");
	if (i < 0)
		throw std::range_error("Out of range index: too low");
	return (this->ptr[i]);
}
#endif