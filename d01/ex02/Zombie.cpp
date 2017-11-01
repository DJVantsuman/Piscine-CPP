/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:10:50 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 12:54:48 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(std::string name, int type){
	this->name = name;
	this->type = type;
}

Zombie :: ~Zombie(){
	std::cout << this->name << " has died" << std :: endl;
}

void	Zombie :: announce(){
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
