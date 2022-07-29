/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:38:10 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 19:18:58 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {

	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "/////////INSTANCIATION : ARRAY " << std::endl << std::endl;

	const	Dog*	dog = new Dog();
	std::cout << std::endl;
	const	Cat*	cat = new Cat();
	std::cout << std::endl;

	Animal	*arrayAnimal[4];
	for (int i = 0 ; i < 4 ; i++) {
		if (i <= 1)
			arrayAnimal[i] = new Dog(*dog);
		else
			arrayAnimal[i] = new Cat(*cat);
	}
	std::cout << std::endl;

	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "/////////INSTANCIATION : COPY CAT/DOG " << std::endl << std::endl;

	const	Cat		copyCat(*cat);
	const	Dog		copyDog(*dog);
	delete cat;
	delete dog;
	std::cout << std::endl;

	std::cout << "/////////TEST : COPY CAT/DOG " << std::endl << std::endl;
	copyCat.makeSound();
	std::cout << copyCat.getType() << " -> Type" << std::endl;
	std::cout << copyCat.getBrain()->ideas[0] << " -> his Ideas !" << std::endl;
	std::cout << std::endl;
	copyDog.makeSound();
	std::cout << copyDog.getType() << " -> Type" << std::endl;
	std::cout << copyDog.getBrain()->ideas[0] << " -> his Ideas !" << std::endl;
	std::cout << std::endl;

	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "/////////DESTUCTION : ARRAY " << std::endl << std::endl;

	for (int i = 0 ; i < 4; i++) {
		delete arrayAnimal[i];
	}
}
