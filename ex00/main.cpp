/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:38:10 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 11:50:35 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {

	const Animal* meta = new Animal();
	const Animal* animalDog = new Dog();
	const Animal* animalCat = new Cat();

	const Dog* dogDog = new Dog();
	const Cat* catCat = new Cat();

	std::cout << "Animal as " << meta->getType() << " is making sound (this is nonsense)" << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	std::cout << animalCat->getType() << " as Animal : is making sound" << std::endl;
	animalCat->makeSound();
	std::cout << std::endl;
	std::cout << animalCat->getType() << " as Animal : is making sound" << std::endl;
	animalDog->makeSound();
	std::cout << std::endl;
	std::cout << animalCat->getType() << " as Dog : is making sound" << std::endl;
	dogDog->makeSound();
	std::cout << std::endl;
	std::cout << animalCat->getType() << " as Cat : is making sound" << std::endl;
	catCat->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;

	delete meta;
	delete animalCat;
	delete animalDog;
	delete dogDog;
	delete catCat;

	std::cout << std::endl;
	std::cout << std::endl;

	//////////////////////////WRONG PART/////////////////////////////
	//
	
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongAnimalCat = new WrongCat();
	const WrongCat* wrongCatCat = new WrongCat();

	std::cout << "Animal as " << wrongMeta->getType() << " is making sound (this is nonsense)" << std::endl;
	wrongMeta->makeSound();
	std::cout << std::endl;
	std::cout << wrongAnimalCat->getType() << " as Animal : is making sound" << std::endl;
	wrongAnimalCat->makeSound();
	std::cout << std::endl;
	std::cout << wrongCatCat->getType() << " as Cat : is making sound" << std::endl;
	wrongCatCat->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;

	delete wrongMeta;
	delete wrongAnimalCat;
	delete wrongCatCat;
}
