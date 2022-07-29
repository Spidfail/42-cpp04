/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:23 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:42:50 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string		AAnimal::getType(void) const {
	return this->_type;
}

void	AAnimal::makeSound(void) const {
	std::cout << "*nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing* *nothing*  " << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
//

AAnimal::~AAnimal() {
	std::cout << "---------AAnimal is Destroying itself," << std::endl;
}
