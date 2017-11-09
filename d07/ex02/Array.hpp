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
	public:
		unsigned int 	length;
		T 				*array;
		Array<T>() : array(NULL), length(0) {};
		Array<T>(unsigned int n) : length(n), array(new T[n]) {};
		Array<T>(Array<T> const &src) {*this = src;};

		~Array<T>(){};

////// operator=
		Array<T> &operator=(Array<T> const &src){
			T *a = new T[src.length];
			T *b = array;
			for (unsigned int i = 0; i < src.length; ++i)
				a[i] = src.array[i];
			length = src.length;
			array = a;
			delete b;
			return *this;
		};

/////// operator[]
		T 		operator[](unsigned int n){
			try{
				if(n > length - 1)
					throw std::exception();
			}
			catch (std::exception ex)
			{
				std::cout << "Error: Element " << n << " is out of the limit." << std::endl;
			}

			return array[n];
		};

		unsigned int	size() {return length;};
};

#endif