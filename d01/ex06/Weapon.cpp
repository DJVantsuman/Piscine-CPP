/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:57:26 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 00:09:47 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->type = type;
}

void	Weapon::setType(std::string type){
	this->type = type;
}

const std::string &	Weapon::getType(){
	return type;
}
