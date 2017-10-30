/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:43:57 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/30 13:10:12 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char** av)
{
	int i;
	int j;
 
	if (ac > 1)
	{
		i = 1;
		while(i < ac)
		{
			j = 0; 
			while(av[i][j])
			{
				std :: cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
			if (i == ac)
				std :: cout << std :: endl;
			else
				std :: cout << " ";
		}
	}
	else
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	return 0;
}
