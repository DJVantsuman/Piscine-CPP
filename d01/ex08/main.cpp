/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 08:27:38 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 23:10:21 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void){

	Human human;
	human.action("meleeAttack", "Vanya");
	human.action("rangedAttack", "Lyosha");
	human.action("intimidatingShout", "Andrei");
	return 0;
}
