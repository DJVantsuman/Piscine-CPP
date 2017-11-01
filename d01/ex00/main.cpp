/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 23:30:34 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 12:38:45 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony*	ponyOnTheHeap(std::string name){
	Pony* pony = new Pony(name);
	return pony;
}

Pony	ponyOnTheStack(std::string name){
	Pony pony = Pony(name);
	return pony;
}

int	main(void){
	Pony    pony1 = ponyOnTheStack("Pony Stack");
	Pony*	pony2 = ponyOnTheHeap("Pony Heap");

	delete pony2;
	return (0);
}
