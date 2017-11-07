/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:38:47 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/06 16:38:50 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cmath>
#include <stdexcept>

class	Bureaucrat {

	private:
		std::string const	name;
		int 				grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string s, int n);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		void	GradeTooHighException();
		void	GradeTooLowException();

		std::string const	getName() const;
		int 				getGrade() const;

		Bureaucrat	&operator=(Bureaucrat const &rhs);
		Bureaucrat	operator++();
		Bureaucrat	operator--();

class GradeTooHighException : public std::exception
{
	public:
		GradeTooHighException();
		std::string		getMessage() const;
};

class GradeTooLowException : public std::exception
{
	public:
		GradeTooLowException();
		std::string		getMessage() const;
};

};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const &rhs);

#endif