/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:57:56 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/07 18:57:59 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern() {}
Intern::Intern(Intern const &src) {*this = src;}
Intern::~Intern() {}

Intern &	Intern::operator=(Intern const &rhs) {return const_cast<Intern&>(rhs);}

Form*		Intern::makeForm(std::string name, std::string target){
	if(name == "RobotomyRequestForm"){
		std::cout << "Intern creates " << target << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (name == "ShrubberyCreationForm"){
		std::cout << "Intern creates " << target << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else if (name == "PresidentialPardonForm"){
		std::cout << "Intern creates " << target << std::endl;
		return new PresidentialPardonForm(target);
	}
	else
		std::cout << "Error: requested form is not known." << std::endl;
	return nullptr;
}