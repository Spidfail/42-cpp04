/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:33:58 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:35:47 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	public:
		Dog();
		~Dog();
		Dog(Dog const &);
		Dog		&operator=(Dog const &);

		Brain	*getBrain() const;

		virtual void	makeSound() const;

	private:
		Brain	*_brain;

};

#endif
