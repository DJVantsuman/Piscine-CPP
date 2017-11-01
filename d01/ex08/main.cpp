/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 08:27:38 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 10:18:38 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void){

	Human human;
	human.action("meleeAttack", "HELLO");
	human.action("rangedAttack", "HELLO");
	human.action("intimidatingShout", "HELLO");
	return 0;
}
