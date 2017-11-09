/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:06:25 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 20:06:27 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() : _size(0) {}
Span::Span(unsigned int n) : _size(n) { _vector.reserve(n);}
Span::Span(Span const &src) : _size(src._size){*this = src;}
Span::~Span() {}

Span & Span::operator=(Span const &src) {return *this;}

void	Span::addNumber(int n) {
	try{
		if(_vector.size() >= _size)
			throw std::exception();
		else
			_vector.push_back(n);
	}
	catch (std::exception e) {
		std::cout << e.what() << ": Can not add item \"" << n << "\". Array already full." << std::endl;
	}
}

int 	Span::shortestSpan() {

	int n = 0;
	std::sort(_vector.rbegin(), _vector.rend());
	n = _vector[0] - _vector[1];
	for (int i = 1; i < _vector.size() - 1; ++i)
		if(_vector[i] - _vector[i + 1] < n)
			n = _vector[i] - _vector[i + 1];
	return n;
}

int 	Span::longestSpan()	{

	std::sort(_vector.rbegin(), _vector.rend());
	return _vector[0] - _vector[_vector.size() - 1];
}