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
#include "Intern.hpp"

int 	main(void){

srand(time(0));
try
{
	Intern intern;
	Form* form;
	form = intern.makeForm("RobotomyRequestForm", "Robot");
	form = intern.makeForm("ShrubberyCreationForm", "Shrubbery");
	form = intern.makeForm("PresidentialPardonForm", "President");
	form = intern.makeForm("Defoult", "Form");
}
catch (std::exception & e){

}


return 0;
}