/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:10:50 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 23:32:35 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

const int	MateriaSource::_storeNumber = 4;

MateriaSource::MateriaSource() {
	for (int i = 0 ; i < _storeNumber ; i++)
		_sorceryBook[i] = NULL;
}


MateriaSource::MateriaSource(MateriaSource const &target) {
	*this = target;
}

////////////////////////////////////////////////////////////////////////////////

MateriaSource	&MateriaSource::operator=(MateriaSource const &target) {

	for (int i = 0 ; i < _storeNumber ; i++) {
		if (this->_sorceryBook[i]) {
			delete this->_sorceryBook[i];
			_sorceryBook[i] = NULL;
		}
		this->_sorceryBook[i] = target._sorceryBook[i];
	}
	return *this;
}

////////////// IMateriaSource /////////////////////////////////////////////////
void		MateriaSource::learnMateria(AMateria *oldMateria) {

	if (oldMateria == NULL)
		return ;
	for (int i = 0 ; i < _storeNumber ; i++) {
		if (this->_sorceryBook[i] == NULL) {
			this->_sorceryBook[i] = oldMateria;
			return ;
		}
	}
	delete oldMateria;
	oldMateria = NULL;
}

AMateria	*MateriaSource::eatMateria(std::string const &type) {

	for (int i = 0; i < _storeNumber ; i++) {
		if (_sorceryBook[i] && _sorceryBook[i]->getType() == type)
			return _sorceryBook[i]->clone();
	}
	return NULL;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < _storeNumber ; i++) {
		if (_sorceryBook[i] && _sorceryBook[i]->getType() == type)
			return _sorceryBook[i]->clone();
	}
	return NULL;
}

////////////////////////////////////////////////////////////////////////////////
//
MateriaSource::~MateriaSource() {

	for (int i = 0 ; i < _storeNumber ; i++) {
		if (_sorceryBook[i])
			delete _sorceryBook[i];
		_sorceryBook[i] = NULL;
	}
}
