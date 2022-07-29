/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:04:56 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:38:48 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class	AAnimal {

	public:
		virtual	~AAnimal();
		std::string				getType(void) const;
		virtual void			makeSound(void) const = 0;

	protected:
		std::string		_type;
};

#endif
