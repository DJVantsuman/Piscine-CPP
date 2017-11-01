/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:20:03 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 11:46:30 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <ctime>

class	Logger {
	
	private:
		void		logToConsole(std::string str);
		void		logToFile(std::string str);
		std::string makeLogEntry(std::string message);
		std::string file;
	public:
		Logger();
		void		log(std::string const & dest, std::string const & message);
};

#endif
