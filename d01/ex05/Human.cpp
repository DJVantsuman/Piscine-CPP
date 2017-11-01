/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:23:19 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 17:41:25 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human :: Human() : brain() {
}

std::string Human::identify(){
	return (const_cast<Brain&>(brain)).identify();
}

Brain	&Human::getBrain(){
	return (const_cast<Brain&>(brain));
}
