/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:12:15 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 00:09:49 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
	private:
		Weapon*  weapon;
		std::string	name;
	public:
		HumanA(std::string name);
		HumanA(std::string name, Weapon &weapon);
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
