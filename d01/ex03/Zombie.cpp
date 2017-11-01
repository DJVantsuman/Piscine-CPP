/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:10:50 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 15:16:26 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{
	int			ztype[5] = {1,2,3,4,5};
	std::string	name[5] = {"Lesha", "Vanya", "Andrei", "Dima", "Pasha"};
	this->name = name[std::rand() % 5];
	this->type = ztype[std::rand() % 5];
}

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
