/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:14:13 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 15:14:15 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int 	main(void){

	Array<int> a1 = Array<int>(3);
	Array<int> a2 = Array<int>(4);

	a1.array[0] = 0;
	a1.array[1] = 1;
	a1.array[2] = 2;

	a2.array[0] = 2;
	a2.array[1] = 1;
	a2.array[2] = 0;
	a2.array[3] = -1;
	
	std::cout << "a1"<<std::endl;
	for (unsigned int i = 0; i < 3; i++)
		std::cout << a1[i] << std::endl;

	a1 = a2;

	std::cout << "\na1 = a2"<<std::endl;
	for (unsigned int i = 0; i < 4; i++)
		std::cout << a1[i] << std::endl;

	std::cout << std::endl;
	a1.array[0] = 0;
	a1.array[1] = 1;
	a1.array[2] = 2;

	std::cout << "\na1"<<std::endl;
	for (unsigned int i = 0; i < 4; i++)
		std::cout << a1[i] << std::endl;

	std::cout << "\na2"<<std::endl;
	for (unsigned int i = 0; i < 4; i++)
		std::cout << a2[i] << std::endl;
	return 0;
}