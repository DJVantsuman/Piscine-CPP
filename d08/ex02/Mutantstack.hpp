/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:23:20 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/09 22:23:23 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    
    MutantStack<T>() : std::stack<T>() { }
    ~MutantStack<T>() { }
    MutantStack<T>(MutantStack<T> const & src) : std::stack<T>(src) {}
    
    iterator begin() {
        return std::stack<T>::c.begin();
    }
    
    iterator end() {
        return std::stack<T>::c.end();
    }
};

#endif