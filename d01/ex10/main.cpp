/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:54:27 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 15:36:35 by itsuman          ###   ########.fr       */
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
		while(std::getline(std::cin, str))
		{
			std::cout << str << std::endl;
		}
	}
	else if(ac > 1)
	{	
		for(int i = 1; i < ac; i++)
		{
			istr.open(av[i]);
			if (istr)
			{
				while(std::getline(istr, str)){
					std::cout << str << std::endl;
				}
				istr.close();
			}
			else
				std::cout << "cat: " << av[i] << " : No such file or directory" << std::endl;
		}
	}
	return 0;
}
