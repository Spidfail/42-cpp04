/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:20:46 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 15:53:34 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure();
		~Cure();
		Cure(Cure const &);
		Cure		&operator=(Cure const &);

		AMateria*	clone() const;
		void		use(ICharacter &target);
};

#endif

