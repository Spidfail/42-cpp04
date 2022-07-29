/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:24:13 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 20:13:06 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

const int	Character::_sizeInventory = 4;

Character::Character() : _name(NULL) {

	for (int i = 0 ; i < 4 ; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(Character const &target) {
	*this = target;
}

Character::Character(std::string const &name) : _name(name) {

	for (int i = 0 ; i < 4 ; i++) {
		_inventory[i] = NULL;
	}
}

////////////////////////////////////////////////////////////////////////////////
//
Character	&Character::operator=(Character const &target) {

	this->_name = target.getName();

	for (int i = 0 ; i < _sizeInventory ; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		this->_inventory[i] = target._inventory[i];
	}
	return *this;
}

////////////////////////////////////////////////////////////////////////////////
//
std::string const	&Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria *m) {

	if (m == NULL)
		return ;
	for (int i = 0 ; i < _sizeInventory ; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
	m = NULL;

}

void	Character::unequip(int index) {

	if (index > 4 || index < 0)
		return ;
	this->_inventory[index] = NULL;
}

void	Character::use(int index, ICharacter &target) {

	if (index > 4 || index < 0)
		return ;
	if (this->_inventory[index])
		this->_inventory[index]->use(target);
}

////////////////////////////////////////////////////////////////////////////////
//
Character::~Character() {

	for (int i = 0 ; i < _sizeInventory ; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}
