/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 23:21:26 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 12:34:29 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony :: Pony(std :: string name) {
	this->name = name;
	std :: cout << this->name << " created" << std :: endl;
}

Pony :: ~Pony(){
	std :: cout << this->name << " has died" << std :: endl;
}
