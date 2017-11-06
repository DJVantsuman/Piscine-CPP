/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:38:34 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/06 16:38:36 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form(): _name("Defoult"), _gradeToSign(10), _gradeToExecute(10){
	_signature = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	_signature = false;
	if (gradeToSign < 1 || gradeToExecute < 1){
		Form::GradeTooHighException::GradeTooHighException ex;
		throw ex;
	}
	else if (gradeToSign > 150 || gradeToExecute > 150){
		Form::GradeTooLowException::GradeTooLowException ex;
		throw ex;
	}
}

Form::Form(Form const &src) : _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	*this = src;
}

Form::~Form(){
}

Form &	Form::operator=(Form const &rhs)
{
	if (this != &rhs){
		const_cast<int&>(_gradeToSign) = rhs.getGradeToSign();
		const_cast<int&>(_gradeToExecute) = rhs.getGradeToExecute();
		_signature = rhs.getSignature();
	}
	return *this;
}

void				Form::beSigned(Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->getGradeToSign() || _signature){
		Form::GradeTooLowException::GradeTooLowException ex;
		throw ex;
	}
	else
		_signature = true;
}

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Too high grade or form already signed." << std::endl;
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Too low grade or form already signed." << std::endl;
}

std::string const	Form::getName() const    			{return _name;}
int 				Form::getGradeToSign() const   		{return _gradeToSign;}
int					Form::getGradeToExecute() const		{return _gradeToExecute;}
bool 				Form::getSignature() const 			{return _signature;}

std::ostream &  operator<<(std::ostream & o, Form const &rhs){
	if (rhs.getSignature())
		o << rhs.getName() << " is signed." << std::endl;
	else
		o << rhs.getName() << " is not signed." << std::endl;
	return o;
}