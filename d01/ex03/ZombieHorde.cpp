/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:15:03 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 15:16:33 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
	this->n = n;
	this->zombies = new Zombie[n];
	this->announce();
}

ZombieHorde::~ZombieHorde(){
	delete [] this->zombies;
	std::cout << "ZombieHorde " << this->n << " has died" << std::endl;
}

void	ZombieHorde::announce(){
	int k;

	k = 0;
	while(k < this->n)
	{
		this->zombies[k].announce();
		k++;
	}
}
