/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:18:47 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:42:16 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain("Cat shit")){

	_type = "Cat";
	std::cout << "---------Cat is building as : " << this->_type << " _type." << std::endl;
	std::cout << "---------Cat using new to create a Brain obj" << std::endl;
}

Cat::Cat( Cat const &instance ) : _brain(NULL) {
	*this = instance;
	std::cout << "---------Cat is building as copy with : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

void	Cat::makeSound(void) const {
	std::cout << "MIAOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU, MIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAOOOOOOOOOOOOOOOOOOOOOOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return this->_brain;
}

///////////////////////////////////////////////////////////////////////////////
//

Cat		&Cat::operator=(Cat const &cp_target) {

	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*cp_target._brain);
	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

Cat::~Cat() {
	std::cout << "---------Cat is Destroying itself," << std::endl;
	delete this->_brain;
}

