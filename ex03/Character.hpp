/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:20:43 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 18:58:29 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

	public:
		Character();
		virtual ~Character();
		Character(Character const &);
		Character	&operator=(Character const &);

		Character(std::string const &);
		std::string const	&getName() const ;
		void	equip(AMateria *m) ;
		void	unequip(int index) ;
		void	use(int index, ICharacter &target) ;

	private:
		std::string			_name;
		AMateria			*_inventory[4];
		static const int	_sizeInventory;
};

#endif
