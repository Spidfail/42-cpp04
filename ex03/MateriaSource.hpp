/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:04:00 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 23:27:14 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const &);
		MateriaSource	&operator=(MateriaSource const &);

		////////////// IMateriaSource ////////////
		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
		AMateria	*eatMateria(std::string const &type);

	private:
		static const int	_storeNumber;
		AMateria			*_sorceryBook[4];
};

#endif

