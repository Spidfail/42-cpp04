/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:58:18 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/25 23:51:05 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int		main() {

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter	*me = new Character("me");
	ICharacter	*bobyboss = new Character("boby le boss");

	AMateria	*ice;
	ice = src->createMateria("ice");
	me->equip(ice);
	me->use(0, *bobyboss);

	
	AMateria	*cure;
	cure = src->createMateria("cure");
	me->equip(cure);

	me->use(0, *bobyboss);
	me->use(1, *bobyboss);

	me->unequip(0);
	me->use(0, *bobyboss);
	me->use(1, *bobyboss);

	/////////////////////////////////////////////////////////////////////
	
	src->learnMateria(new Ice()); // on 0
	src->learnMateria(new Cure()); // on 2

	delete src;
	delete me;
	delete bobyboss;
	delete ice; // deleting unequip materia


	////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////
	//            Testing empty slots and unequiped materias
	//
	//
	std::cout << "\nMy tests:\n";
	{
		ICharacter    *sorcerer = new Character("Pug");
		std::cout << "sorcerer name = " << sorcerer->getName() << std::endl;

		std::cout << "Testing use and unequip on Sorcerer whithout nothing equiped" << std::endl;
		ICharacter    *sorcerer2 = new Character("Bad Character");
		sorcerer->use(0, *sorcerer2); // empty slot
		sorcerer->use(1, *sorcerer2); // empty slot
		sorcerer->unequip(1); // try to unequip an empty slot
		sorcerer->use(1, *sorcerer2); // empty slot
		std::cout << std::endl;

		/////////////// Creating matera and assigning to Sorcerer
		//
		IMateriaSource    *materias = new MateriaSource();
		materias->learnMateria(new Ice()); // slot 0

		AMateria *ice2 = materias->createMateria("ice");
		ice2->use(*sorcerer); // use a matera without equipying it

		AMateria *cure2 = materias->createMateria("cure");
		if (cure2)
			cure2->use(*sorcerer2); // if Materia is copied, use it but not supposed to.

		/////////////// Learn it to create it
		//
		materias->learnMateria(new Cure()); // slot 1
		cure2 =  materias->createMateria("cure");
		cure2->use(*sorcerer2);


		////////////// Equip the created ones
		//
		sorcerer->equip(ice2); // slot 0
		sorcerer->equip(cure2); // slot 1
		std::cout << std::endl;

		///////////// Using the created ones
		//
		std::cout << " Sorcerer is using his Materias !!! " << std::endl;
		sorcerer->use(0, *sorcerer2);
		sorcerer->use(1, *sorcerer2); // cure2;
		std::cout << std::endl;

		std::cout << " Sorcerer tried to use an unequip materia... " << std::endl;
		sorcerer->unequip(1);
		sorcerer->use(1, *sorcerer2);
		std::cout << " -------- No crash !" << std::endl;
		std::cout << std::endl;

		std::cout << " Source Materia tried to equip more than 4 materias " << std::endl;
		materias->learnMateria(new Cure()); // 2
		materias->learnMateria(new Ice()); // 3
		materias->learnMateria(new Ice()); // 4 -> too mutch
		std::cout << " -------- No crash !" << std::endl;
		std::cout << std::endl;

		std::cout << " Sorcerer tried to equip more than 4 materias " << std::endl;
		sorcerer->equip(materias->createMateria("cure")); // slot 1
		sorcerer->equip(materias->createMateria("cure")); // slot 2
		sorcerer->equip(materias->createMateria("cure")); // slot 3
		sorcerer->equip(materias->createMateria("ice")); // out
		sorcerer->equip(materias->createMateria("ice")); // out
		sorcerer->equip(materias->createMateria("ice")); // out
		std::cout << " -------- No crash !" << std::endl;
		std::cout << " -------- Check : Ice shot - Cure - Cure - Cure" << std::endl;
		for (int i=0; i < 4 ; i++)
			sorcerer->use(i, *sorcerer2);


		delete sorcerer; // deleting character
		delete sorcerer2; // deleting character
		delete materias; // deleting Materia Source
		delete cure2; // deleting unequip materia
	}
}
