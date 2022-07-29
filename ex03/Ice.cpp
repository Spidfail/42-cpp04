/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:39:53 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 18:53:10 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"


Ice::Ice() : AMateria("ice") {
}


Ice::Ice(Ice const &) : AMateria("ice") {
}

//////////////////////////////////////////////////////////////////////////////
//
Ice			&Ice::operator=(Ice const &target) {
	this->_type = target.getType();
	return *this;
}

//////////////////////////////////////////////////////////////////////////////
//
AMateria	*Ice::clone() const {
	AMateria	*tmp = new Ice();
	return tmp;
}

void		Ice::use(ICharacter &target) {
	std::cout << "* " << " shoots an " << this->getType() << " bolt at " << target.getName()  << " *" << std::endl;
}

//////////////////////////////////////////////////////////////////////////////
//

Ice::~Ice() {
}
