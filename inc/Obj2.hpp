/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obj2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aistok <aistok@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:49:44 by aistok            #+#    #+#             */
/*   Updated: 2025/11/25 17:00:54 by aistok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef OBJ2_HPP
# define OBJ2_HPP

# include "Obj.hpp"
# include <iostream>

class Obj2 : public Obj {

	public:

		Obj2();

		Obj2( const std::string name );

		~Obj2();

		Obj2( const Obj2 &other);

		/*
		Obj &
		operator= ( const Obj &other );
		*/

		void
		act1 ( void );

	private:

		//std::string	_name;

};

#endif // OBJ2_HPP

