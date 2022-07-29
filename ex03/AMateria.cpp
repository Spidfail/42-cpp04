/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:30:27 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 18:57:08 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type(NULL) {
}

AMateria::AMateria(AMateria const &target){
	*this = target;
}

////////////////////////////////////////////////////////////////////////////////
//
AMateria	&AMateria::operator=(AMateria const &target) {
	this->_type = target.getType();
	return *this;
}

////////////////////////////////////////////////////////////////////////////////
//
AMateria::AMateria(std::string const &type) : _type(type) {
}

std::string const	&AMateria::getType() const {
	return this->_type;
}

void		AMateria::use(ICharacter &target) {
	(void)target;
}

////////////////////////////////////////////////////////////////////////////////
//
AMateria::~AMateria() {
}
