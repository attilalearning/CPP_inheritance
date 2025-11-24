/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obj.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aistok <aistok@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:49:44 by aistok            #+#    #+#             */
/*   Updated: 2025/11/24 19:34:09 by aistok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Obj.hpp"

Obj::Obj() {
	_name = "UNNAMED";
	std::cout
		<< "Obj: Default constructor called"
		<< ", name = " << _name
		<< std::endl;
}

Obj::Obj( const std::string name ) {
	_name = name;
	std::cout
		<< "Obj: Default constructor w/name called"
		<< ", name = " << _name
		<< std::endl;
}

Obj::~Obj() {
	// nothing to do here
	std::cout
		<< "Obj: Default destructor called"
		<< ", name = " << _name
		<< std::endl;
}

Obj::Obj( const Obj &other) {
	if (this != &other)
		this->_name = other._name;
	std::cout
		<< "Obj: Copy constructor called"
		<< ", name = " << _name
		<< std::endl;
}

Obj &
Obj::operator= ( const Obj &other ) {
	if (this != &other) {
		this->_name = other._name;
	}
	std::cout
		<< "Obj: Assignment operator called"
		<< ", name = " << _name
		<< std::endl;
	return (*this);
}

void
Obj::act1 ( void ) {
	std::cout
		<< "Obj: act1 called"
		<< std::endl;
}

