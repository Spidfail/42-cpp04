/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:18:43 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:28:50 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

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
