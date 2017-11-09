/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:03:26 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 19:03:29 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <vector>

int 	main(void){
	std::vector<int> v;

	v.push_back(25);
	v.push_back(28);
	try{
		std::cout << *easyfind(v, 26) << std::endl;
	}
	catch (std::exception e){
		std::cout << e.what() << std::endl;
	}

}