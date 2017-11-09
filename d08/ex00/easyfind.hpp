/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:31:29 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 18:31:32 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
typename T::iterator easyfind(T array, int n){
	typename T::iterator iter;
	iter = find(array.begin(), array.end(), n);
	if(iter == array.end())
		throw std::exception();
	return iter;
}

#endif