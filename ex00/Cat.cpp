/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:18:47 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:39:38 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "---------Cat is building as : " << this->_type << " _type." << std::endl;
}

Cat::Cat( Cat const &instance ) {
	*this = instance;
	std::cout << "---------Cat is building as copy with : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

void	Cat::makeSound(void) const {
	std::cout << "MIAOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU, MIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAOOOOOOOOOOOOOOOOOOOOOOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

Cat		&Cat::operator=(Cat const &cp_target) {

	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

Cat::~Cat() {
	std::cout << "---------Cat is Destroying itself," << std::endl;
}

