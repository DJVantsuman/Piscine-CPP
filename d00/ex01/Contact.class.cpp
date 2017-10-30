/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:40:25 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/30 21:15:31 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"
	
Contact :: Contact(void) {
}

void	Contact :: setFirstName() {
	std :: cout << "ENTER FIRST NAME" << std :: endl;
	std :: getline(std :: cin, this->firstName);
}

std :: string	Contact :: getFirstName() {
	return this->firstName;
}

void	Contact :: setLastName() {
	std :: cout << "ENTER LAST NAME" << std :: endl;
	std :: getline(std :: cin, this->lastName);
}

std :: string   Contact :: getLastName() {
	return this->lastName;
}

void    Contact :: setNickName() {
	std :: cout << "ENTER NICKNAME" << std :: endl;
	std :: getline(std :: cin, this->nickName);
}

std :: string   Contact :: getNickName() {
	return this->nickName;
}

void    Contact :: setLogin() {
	std :: cout << "ENTER LOGIN" << std :: endl;
	std :: getline(std :: cin, this->login);
}

std :: string   Contact :: getLogin() {
	return this->login;
}

void    Contact :: setPostalAddress() {
	std :: cout << "ENTER POSTAL ADDRESS" << std :: endl;
	std :: getline(std :: cin, this->postalAddress);
}           

std :: string   Contact :: getPostalAddress() {
	 return this->postalAddress;
}

void    Contact :: setEmail() {
	std :: cout << "ENTER EMAIL" << std :: endl;
	std :: getline(std :: cin, this->email);
}                       

std :: string   Contact :: getEmail() {
	return this->email;
}

void    Contact :: setFavoriteMeal() {
	std :: cout << "ENTER FAVORITE MEAL" << std :: endl;
	std :: getline(std :: cin, this->favoriteMeal);
}

std :: string   Contact :: getFavoriteMeal() {
	return this->favoriteMeal;
}

void    Contact :: setUnderwearColor() {
	std :: cout << "ENTER UNDERWEAR COLOR" << std :: endl;
	std :: getline(std :: cin, this->underwearColor);
}            

std :: string   Contact :: getUnderwearColor() {
	return this->underwearColor;
}

void    Contact :: setDarkestSecret() {
	std :: cout << "ENTER DARKEST SECRET" << std :: endl;
	std :: getline(std :: cin, this->darkestSecret);
}                                           
                                            
std :: string   Contact :: getDarkestSecret() {
	return this->darkestSecret;
}

void    Contact :: setPhoneNumber() {
	std :: cout << "ENTER PHONE NUMBER" << std :: endl;
	std :: getline(std :: cin, this->phoneNumber);
}                                           
                                            
std :: string	Contact :: getPhoneNumber() {
	return this->phoneNumber;
}

void    Contact :: setBirthday() {
	std :: cout << "ENTER BIRTHDAY" << std :: endl;
	std :: getline(std :: cin, this->birthday);
}                                           
                                            
std:: string    Contact :: getBirthday() {
	return this->birthday;
}
