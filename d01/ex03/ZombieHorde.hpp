/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:00:21 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 15:16:35 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieHorde {
	private:
		int 	n;
		Zombie* zombies;
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce();
};

#endif
