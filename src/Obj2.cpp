/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obj2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aistok <aistok@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:49:44 by aistok            #+#    #+#             */
/*   Updated: 2025/11/24 19:36:21 by aistok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Obj2.hpp"

Obj2::Obj2() : Obj() {
	//_name = "UNNAMED";
	std::cout
		<< "Obj2: Default constructor called"
		<< ", name = " << _name
		<< std::endl;
}

Obj2::Obj2( const std::string name ) : Obj( name ) {
	//_name = name;
	std::cout
		<< "Obj2: Default constructor w/name called"
		<< ", name = " << _name
		<< std::endl;
}

Obj2::~Obj2() {
	// nothing to do here
	std::cout
		<< "Obj2: Default destructor called"
		<< ", name = " << _name
		<< std::endl;
}

Obj2::Obj2( const Obj2 &other) {
	if (this != &other)
		this->_name = other._name;
	std::cout
		<< "Obj2: Copy constructor called"
		<< ", name = " << _name
		<< std::endl;
}

/*
Obj &
Obj2::operator= ( const Obj &other ) {
	if (this != &other) {
		this->_name = other._name;
	}
	std::cout
		<< "Obj2: Assignment operator called"
		<< ", name = " << _name
		<< std::endl;
	return (*this);
}
*/

void
Obj2::act1 ( void ) {
	std::cout
		<< "Obj2: act1 called"
		<< std::endl;
}

