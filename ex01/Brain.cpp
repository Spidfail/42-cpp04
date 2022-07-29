/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:10:22 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 18:36:56 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "It has a brain now. No really." << std::endl;
}

Brain::Brain(std::string const &new_name) {
	std::cout << "It has a brain now. No really." << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = new_name;
}

Brain::Brain(Brain const &target_cpy) {
	std::cout << "It has a brain now. No really." << std::endl;
	*this = target_cpy;
}

Brain::Brain(std::string const oldIdeas[100]) {
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = oldIdeas[i];
}

Brain	&Brain::operator=(Brain const &target_assign) {
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = target_assign.ideas[i];

	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destruction." << std::endl;
}
