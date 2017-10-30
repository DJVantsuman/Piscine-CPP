/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:00:17 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/30 21:15:24 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"
#include "PhoneBook.class.h"
#include <stdlib.h>

int	main(void) {
	Contact			contactList[8];
	PhoneBook		phoneBook;
	std :: string	command;
	char			s[1];
	int				f;
	int				id;

	f = 0;
	id = 0;
	while(1) {
		std :: cout << "ENTER COMMAND" << std :: endl;
		std :: getline(std :: cin, command);

		if(command == "ADD" && f < 8) {
			contactList[f] = phoneBook.init();
			f++;
		}
		else if(command == "SEARCH") {
			phoneBook.printBook(contactList, f);
			std :: cout << "ENTER CONTAKT ID" << std :: endl;
			std :: cin >> s;
			id = atoi(s);
			phoneBook.printContact(id, contactList);
		}
		else if(command == "EXIT")
			std :: exit(1);
	}
	return 0;
}
