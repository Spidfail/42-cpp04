/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:33:31 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:40:17 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "---------Dog is building as : " << this->_type << " _type." << std::endl;
}

Dog::Dog( Dog const &instance ) {
	*this = instance;
	std::cout << "---------Dog is building as copy with : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

void	Dog::makeSound(void) const {
	std::cout << "WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF " << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

Dog		&Dog::operator=(Dog const &cp_target) {

	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

Dog::~Dog() {
	std::cout << "---------Dog is Destroying itself," << std::endl;
}
