/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:05:31 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 14:18:07 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void){
	srand(time(0));
	ZombieEvent event;
	Zombie* zombie1 = event.randomChump();
	Zombie* zombie2 = event.randomChump();
	Zombie* zombie3 = event.randomChump();
	delete zombie1;
	delete zombie2;
	delete zombie3;
}
