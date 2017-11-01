/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:01:02 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 15:16:40 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void){
	srand(time(0));
	ZombieHorde*  zombiehord = new ZombieHorde(15);
	delete zombiehord;
	return 0;
}


