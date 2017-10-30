/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 18:15:16 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/30 21:15:34 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.h"

PhoneBook :: PhoneBook(void) {
}

Contact PhoneBook :: init(void){
	Contact newContact;
	newContact.setFirstName();
	newContact.setLastName();
	newContact.setNickName();
	newContact.setLogin();
	newContact.setPostalAddress();
	newContact.setEmail();
	newContact.setFavoriteMeal();
	newContact.setUnderwearColor();
	newContact.setDarkestSecret();
	newContact.setPhoneNumber();
	newContact.setBirthday();
	return newContact;
}

void	PhoneBook :: printBook(Contact *list, int n) {
	int	f;
	int	t;
	int	k;
	std:: string value;

	f = 0;
	while(f < n) {
		k = 1;
		std :: cout << f << " | ";
		while (k < 4){
			if(k == 1)
				value = list[f].getFirstName();
			else if(k == 2)
				value = list[f].getLastName();
			else if(k == 3)
				value = list[f].getNickName();

			if(value.length() < 10)
				std :: cout << std :: setw(10) << value;
			else {
				t = 0;
				while (t < 9){
					std :: cout << value[t];
					t++;
				}
				std :: cout << ".";
			}
			if (k < 3)
				std :: cout << " | ";
			k++;
		}
		std :: cout << std :: endl;
		f++;
	}
}

void	PhoneBook :: printContact(int id, Contact *list){
	std :: cout << "First Name: " << list[id].getFirstName()<< std::endl;
	std :: cout << "Last Name: " << list[id].getLastName()<< std::endl;
	std :: cout << "Nickname: " << list[id].getNickName()<< std::endl;
	std :: cout << "Login: " << list[id].getLogin()<< std::endl;
	std :: cout << "Postal Address: " << list[id].getPostalAddress()<< std::endl;
	std :: cout << "Emaile: " << list[id].getEmail()<< std::endl;
	std :: cout << "Phone namber: " << list[id].getPhoneNumber()<< std::endl;
	std :: cout << "Birthday: " << list[id].getBirthday()<< std::endl;
	std :: cout << "Favorite meal: " << list[id].getFavoriteMeal()<< std::endl;
	std :: cout << "Underwear color: " << list[id].getUnderwearColor()<< std::endl;
	std :: cout << "Darkest secret: " << list[id].getDarkestSecret()<< std::endl;
}
