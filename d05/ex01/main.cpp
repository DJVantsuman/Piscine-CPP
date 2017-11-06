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

int 	main(void){

	try
	{
		Bureaucrat bureaucrat1 = Bureaucrat("Andrei", 150);
		Bureaucrat bureaucrat2 = Bureaucrat("Lesha", 1);
		Bureaucrat bureaucrat3 = Bureaucrat("Vanya", 75);
		Form		form1 = Form("Form 1", 1, 10);
		Form		form2 = Form("Form 2", 15, 10);
		form1.beSigned(bureaucrat2);
		std::cout << form1;
		bureaucrat2.signForm(form2);
		std::cout << form2;
		form2.beSigned(bureaucrat2);
		std::cout << form2;
	}
	catch (std::exception & e)
	{
		
	}
	return 0;
}