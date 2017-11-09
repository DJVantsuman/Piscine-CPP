/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:31:11 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 14:31:13 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int 	length;
		T 				*array;
	public:
		Array<T>() : array(NULL), length(0) {};
		Array<T>(unsigned int n) : length(n), array(new T[n]) {};
		Array<T>(Array<T> const &src) {*this = src;};

		~Array<T>();

////// operator=
		Array<T> &operator=(Array<T> const &src){
			if (this != &src)
			{
				try{
					for(unsigned int i = 0; i < length; i++){
						array[i] = src.array[i];
					}
				}
				catch (std::exception ex){
					std::cout << "Too long array." << std::endl;
				}
			}
			return *this;
		};

/////// operator[]
		T 		operator[](int n){
			if(n >= length)
				throw std::exception();
			return array[n];
		};

		unsigned int	size() {return length;};
};

#endif