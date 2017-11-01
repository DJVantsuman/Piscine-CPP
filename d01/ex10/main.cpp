/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:54:27 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 12:41:27 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char *av[])
{
	std::ifstream istr;
	std::string str;
	if(ac == 1)
	{
		while(1)
		{
			std::cin >> str;
			std::cout << str << std::endl;
		}
	}
	else if(ac > 1)
	{	
		istr.open(av[1]);
		if (istr)
		{
			while(std::getline(istr, str)){
				std::cout << str << std::endl;
			}
			istr.close();
		}
		else
			std::cout << "cat: 1: No such file or directory" << std::endl;
	}
	return 0;
}
