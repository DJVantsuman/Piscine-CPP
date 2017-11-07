/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:15:55 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/07 11:16:00 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5){}
PresidentialPardonForm::~PresidentialPardonForm()	{}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() > this->getGradeToSign() || !(this->getSignature())){
		PresidentialPardonForm::GradeTooLowException::GradeTooLowException ex;
		throw ex;
	}
	else
	{
		std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
}