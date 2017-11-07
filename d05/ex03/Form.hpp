/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:38:47 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/06 16:38:50 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <cmath>
# include <stdexcept>
# include <fstream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

	private:
		std::string const	_name;
		int const			_gradeToSign;
		int	const			_gradeToExecute;
		bool				_signature;
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		~Form();

		void				beSigned(Bureaucrat & bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;

		std::string const	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool 				getSignature() const;

		Form				&operator=(Form const &rhs);

class GradeTooHighException : public std::exception
{

public:
	GradeTooHighException();
};

class GradeTooLowException : public std::exception
{

public:
	GradeTooLowException();
};

};

std::ostream &  operator<<(std::ostream & o, Form const &rhs);

#endif