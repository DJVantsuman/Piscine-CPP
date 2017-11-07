/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:38:34 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/06 16:38:36 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Defoult"){
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string s, int n) : name(s), grade(n){
	try{
		if (n < 1)
			throw Bureaucrat::GradeTooHighException::GradeTooHighException();
		else if (n > 150){
			throw Bureaucrat::GradeTooLowException::GradeTooLowException();
		}
		else
			grade = n;
	}
	catch (GradeTooHighException ex)
	{

	} 
	catch (GradeTooLowException ex)
	{
		std::cout << "Error: " << *this << ex.getMessage() << std::endl; 
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	*this = src;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->grade = rhs.getGrade();
	return *this;
}

void				Bureaucrat::signForm(Form & form){
	form.beSigned(*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}
std::string		Bureaucrat::GradeTooHighException::getMessage() const {return "Too high grade.";}

Bureaucrat::GradeTooLowException::GradeTooLowException(){}
std::string		Bureaucrat::GradeTooLowException::getMessage() const {return "Too low grade.";}

std::string const	Bureaucrat::getName() const{
	return name;
}
int 				Bureaucrat::getGrade() const{
	return grade;
}

std::ostream &  operator<<(std::ostream & o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

Bureaucrat	Bureaucrat::operator++()
{
	if(grade > 1 )
		grade--;
	else {
		Bureaucrat::GradeTooHighException::GradeTooHighException ex;
		throw ex;
	}
	return *this;
}

Bureaucrat   Bureaucrat::operator--()
{
	if(grade < 150 )
		grade++;
	else {
		Bureaucrat::GradeTooLowException::GradeTooLowException ex;
		throw ex;
	}
	return *this;
}