/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:30:11 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 18:52:52 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria {

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &);
		AMateria	&operator=(AMateria const &);

		AMateria(std::string const &type);
		std::string const	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string			_type;
};

#endif
