/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:13:08 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 18:04:05 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &);
		Ice		&operator=(Ice const &);

////////////////AMateria///////////////
		AMateria*	clone() const;
		void		use(ICharacter &target);
};

#endif
