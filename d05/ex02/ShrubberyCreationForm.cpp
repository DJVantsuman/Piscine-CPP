/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:15:22 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/07 11:15:24 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){}
ShrubberyCreationForm::~ShrubberyCreationForm()	{}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() > this->getGradeToSign() || !(this->getSignature())){
		throw ShrubberyCreationForm::GradeTooLowException::GradeTooLowException();
	}
	else
	{
		std::string name = this->getName() + "_shrubbery";
		std::ofstream fout(name);
		fout << "    MM " << std::endl;
		fout << "  WQWWQW " << std::endl;
		fout << " WWWWWWQW " << std::endl;
		fout << " WQW||WWW " << std::endl;
		fout << "  WW||WW " << std::endl;
		fout << "    ||  " << std::endl;
		fout << "    ||  " << std::endl;
		fout << "   /  \\" << std::endl;
		fout << "----------" << std::endl;
		fout.close();
	}
}