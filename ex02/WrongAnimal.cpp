/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:23:19 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:41:01 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "---------WrongAnimal is building as : " << this->_type << " _type." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &instance ) {
	*this = instance;
	std::cout << "---------WrongAnimal is building as copy with : " << this->_type << " _type." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type) {
	std::cout << "---------WrongAnimal is building with type entered as : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////

std::string		WrongAnimal::getType(void) const {
	return this->_type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing*  " << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &cp_target) {

	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

WrongAnimal::~WrongAnimal() {
	std::cout << "---------WrongAnimal is Destroying itself," << std::endl;
}
