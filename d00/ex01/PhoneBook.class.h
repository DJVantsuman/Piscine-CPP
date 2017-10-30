/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 18:08:49 by itsuman           #+#    #+#             */
/*   Updated: 2017/10/30 21:15:38 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.class.h"

class PhoneBook {
	public:
		PhoneBook(void);
		Contact		init(void);
		void		printBook(Contact *list, int n);
		void		printContact(int id, Contact *list);
};

#endif
