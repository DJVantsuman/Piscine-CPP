/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 10:29:04 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 12:55:00 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
#include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {
	private: 
		int		type;
	public:
		void	setZombieType(int type);
		Zombie*	randomChump();
		Zombie*	newZombie(std::string name);
};

#endif
