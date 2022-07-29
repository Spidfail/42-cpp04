/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:33:31 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:14:39 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain("Dog shit")) {
	std::cout << "---------Dog is building as : " << this->_type << " _type." << std::endl;
	std::cout << "---------Dog using new to create a Brain obj" << std::endl;
}

Dog::Dog( Dog const &instance ) : Animal("Dog"), _brain(NULL) {
	*this = instance;
	std::cout << "---------Dog is building as copy with : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

Brain	*Dog::getBrain(void) const {
	return this->_brain;
}

void	Dog::makeSound(void) const {
	std::cout << "WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF " << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

Dog		&Dog::operator=(Dog const &cp_target) {

	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*cp_target._brain);
	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

Dog::~Dog() {
	std::cout << "---------Dog is Destroying itself." << std::endl;
	delete this->_brain;
}
