/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:07:56 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/30 21:15:28 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>

class Contact {
	private:
		std::string	firstName,
			  		lastName,
			  		nickName,
			  		login,
			  		postalAddress,
			  		email,
					favoriteMeal,
					underwearColor,
					darkestSecret,
					phoneNumber,
					birthday;
	public:
		Contact(void);
			void	setFirstName();
		std::string	getFirstName();
			void	setLastName();
		std::string	getLastName();
			void	setNickName();
		std::string	getNickName();
			void	setLogin();
		std::string	getLogin();
			void	setPostalAddress();
		std::string	getPostalAddress();
			void	setEmail();
		std::string	getEmail();
			void	setFavoriteMeal();
		std::string	getFavoriteMeal();
			void	setUnderwearColor();
		std::string	getUnderwearColor();
			void	setDarkestSecret();
		std::string	getDarkestSecret();
			void	setPhoneNumber();
		std::string	getPhoneNumber();
			void	setBirthday();
		std::string	getBirthday();
};

#endif
