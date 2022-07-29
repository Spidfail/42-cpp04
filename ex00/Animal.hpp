/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:04:56 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 16:52:26 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal {

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &);
		Animal	&operator=(Animal const &);

		Animal(std::string const &);

		std::string			getType(void) const;

		virtual void		makeSound(void) const;

	protected:
		std::string		_type;
};

#endif
