/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:39:07 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/06 16:39:08 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int 	main(void){

	try
	{
		Bureaucrat bureaucrat1 = Bureaucrat("Andrei", 150);
		Bureaucrat bureaucrat2 = Bureaucrat("Lesha", 1);
		Bureaucrat bureaucrat3 = Bureaucrat("Vanya", 75);

		++bureaucrat3;
		std::cout << bureaucrat3;
	}
	catch (std::exception & e)
	{
		
	}
	return 0;
}