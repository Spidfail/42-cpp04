/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:23 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:38:31 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "---------Animal is building as : " << this->_type << " _type." << std::endl;
}

Animal::Animal( Animal const &instance ) {
	*this = instance;
	std::cout << "---------Animal is building as copy with : " << this->_type << " _type." << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "---------Animal is building with type entered as : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////

std::string		Animal::getType(void) const {
	return this->_type;
}

void	Animal::makeSound(void) const {
	std::cout << "*nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing*  " << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

Animal		&Animal::operator=(Animal const &cp_target) {

	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

Animal::~Animal() {
	std::cout << "---------Animal is Destroying itself," << std::endl;
}
