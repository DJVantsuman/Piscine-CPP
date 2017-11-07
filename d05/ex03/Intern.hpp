/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:58:10 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/07 18:58:15 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <iostream>

class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern		&operator=(Intern const &rhs);

	Form		*makeForm(std::string name, std::string target);
};

#endif