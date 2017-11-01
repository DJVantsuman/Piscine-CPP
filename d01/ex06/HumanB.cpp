/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:24:13 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 20:54:02 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon){
	this->name = name;
	this->weapon = &weapon;
}

void    HumanB::setWeapon(Weapon & weapon){
	this->weapon = &weapon;
}

void    HumanB::attack(){
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
