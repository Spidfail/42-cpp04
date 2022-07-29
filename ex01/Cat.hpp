/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:18:43 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 18:22:33 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat();
		~Cat();
		Cat(Cat const &);
		Cat		&operator=(Cat const &);
		Brain	*getBrain() const;

		virtual void	makeSound() const;
	
	private:
		Brain	*_brain;
};

#endif
