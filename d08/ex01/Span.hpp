/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:06:35 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 20:06:39 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int const	_size;
		std::vector<int>	_vector;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		~Span();
		
		Span & operator=(Span const &src);

		void	addNumber(int n);
		int 	shortestSpan();
		int 	longestSpan();	
};

#endif