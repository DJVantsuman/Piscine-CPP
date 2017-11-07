/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:14:54 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/07 11:15:14 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){}
RobotomyRequestForm::~RobotomyRequestForm()	{}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() > this->getGradeToSign()){
		RobotomyRequestForm::GradeTooLowException::GradeTooLowException ex;
		throw ex;
	}
	else
	{
		std::string s1 = this->getName() + " has been robotomized successfully.";
		std::string s2 = this->getName() + " has been robotomized failure.";
		std::string s[2] = {s1, s2};
		std::cout << s[rand() % 2] << std::endl;
	}
}