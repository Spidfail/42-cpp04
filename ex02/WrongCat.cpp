/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:25:34 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:42:03 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "---------WrongCat is building as : " << this->_type << " _type." << std::endl;
}

WrongCat::WrongCat( WrongCat const &instance ) {
	*this = instance;
	std::cout << "---------WrongCat is building as copy with : " << this->_type << " _type." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

void	WrongCat::makeSound(void) const {
	std::cout << "MIAOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU, MIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAOOOOOOOOOOOOOOOOOOOOOOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

WrongCat		&WrongCat::operator=(WrongCat const &cp_target) {

	this->_type = cp_target._type;
	return *this;
}

///////////////////////////////////////////////////////////////////////////////
//

WrongCat::~WrongCat() {
	std::cout << "---------WrongCat is Destroying itself," << std::endl;
}
