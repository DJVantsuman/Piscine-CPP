/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:29:22 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 12:55:09 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(int type){
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name){
	Zombie* zombie = new Zombie(name, this->type);
	return zombie;
}

Zombie*	ZombieEvent::randomChump(){
	int         ztype[5] = {1,2,3,4,5};
	std::string name[5] = {"Lesha", "Vanya", "Andrei", "Dima", "Pasha"};

	setZombieType(ztype[std::rand() % 5]);
	Zombie* zombie = newZombie(name[std::rand() % 5]);
	zombie->announce();
	return zombie;
}
