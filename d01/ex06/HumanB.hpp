/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:23:46 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/31 20:54:00 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class   HumanB {
	private:
		Weapon* weapon;
		std::string name;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		void    attack();
		void    setWeapon(Weapon & weapon);
};

#endif
