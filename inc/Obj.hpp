/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obj.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aistok <aistok@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:49:44 by aistok            #+#    #+#             */
/*   Updated: 2025/11/24 19:30:34 by aistok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef OBJ_HPP
# define OBJ_HPP

# include <iostream>

class Obj {

	public:

		Obj();

		Obj( const std::string name );

		~Obj();

		Obj( const Obj &other);

		Obj &
		operator= ( const Obj &other );

		void
		act1 ( void );

	private:

		std::string	_name;

};

#endif // OBJ_HPP

