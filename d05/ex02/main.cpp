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
#include "PresidentialPardonForm.hpp"

int 	main(void){

srand(time(0));
try
{
	Bureaucrat bureaucrat1 = Bureaucrat("Andrei", 24);
	ShrubberyCreationForm shrubForm = ShrubberyCreationForm("Shrubbery");
	bureaucrat1.signForm(shrubForm);
	shrubForm.execute(bureaucrat1);
	RobotomyRequestForm roboForm = RobotomyRequestForm("Roboto");
	bureaucrat1.signForm(roboForm);
	roboForm.execute(bureaucrat1);
	PresidentialPardonForm president = PresidentialPardonForm("Yanukovich");
	president.execute(bureaucrat1);
	bureaucrat1.executeForm(president);
	bureaucrat1.executeForm(president);
	bureaucrat1.executeForm(president);

}
catch (std::exception & e){

}


return 0;
}