/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:57:39 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 13:57:42 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T * array, int length, void (*f)(T)){
	for(int i = 0; i < length; i++){
		f(array[i]);
	}
}

template <typename T>
void	print(T n){
	std::cout << n << std::endl;
}

int 	main(void){
	int arr1[5] = {1, 2, 3, 4, 5};
	char arr2[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string arr3[2] = {"Lesha", "Vanya"};

	void	(*f1)(int) = print;
	void	(*f2)(char) = print;
	void	(*f3)(std::string) = print;

	iter(arr1, 5, f1);
	iter(arr2, 5, f2);
	iter(arr3, 2, f3);
}