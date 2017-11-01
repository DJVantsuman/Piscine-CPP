/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:12:00 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 00:09:52 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name){
	this->name = name;
}

HumanA::HumanA(std::string name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
}

void	HumanA::setWeapon(Weapon & weapon){
	this->weapon = &weapon;
}

void	HumanA::attack(){
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
