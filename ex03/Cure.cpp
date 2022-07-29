/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:03:15 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 18:43:00 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}


Cure::Cure(Cure const &) : AMateria("cure") {
}

//////////////////////////////////////////////////////////////////////////////
//
Cure			&Cure::operator=(Cure const &target) {
	this->_type = target.getType();
	return *this;
}

//////////////////////////////////////////////////////////////////////////////
//
AMateria	*Cure::clone() const {
	AMateria	*tmp = new Cure();
	return tmp;
}

void		Cure::use(ICharacter &target) {
	std::cout << "** heals " << target.getName()  << "'s wounds *" << std::endl;
}

//////////////////////////////////////////////////////////////////////////////
//

Cure::~Cure() {
}
