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
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int 	main(void){

srand(time(0));
try
{
	Bureaucrat bureaucrat1 = Bureaucrat("Andrei", 70);
	ShrubberyCreationForm shrubForm = ShrubberyCreationForm("Shrubbery");
	shrubForm.execute(bureaucrat1);
	RobotomyRequestForm roboForm = RobotomyRequestForm("Roboto");
	roboForm.execute(bureaucrat1);

}
catch (std::exception & e){

}


return 0;
}