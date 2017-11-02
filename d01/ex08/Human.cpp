/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 08:27:29 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 23:09:19 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target){
	std::cout << "meleeAttack was called from " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target){
    std::cout << "rangedAttack was called from "<< target << std::endl;
}

void	Human::intimidatingShout(std::string const & target){
    std::cout << "intimidatingShout was called from "<< target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target){
	
	typedef void (Human::*Test)(std::string const & target);
	std::string name[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	Test test[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for(int i = 0; i < 3; i++)
	{
		if(name[i] == action_name)
			(this->*test[i])(target);
	}
}
