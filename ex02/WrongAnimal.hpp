/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:19:22 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:20:37 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal {

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &);
		WrongAnimal	&operator=(WrongAnimal const &);

		WrongAnimal(std::string const &);

		std::string			getType(void) const;

		void		makeSound(void) const;

	protected:
		std::string		_type;
};

#endif
