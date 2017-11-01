/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:20:13 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 11:46:27 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger() {
	file = "Log.txt";
}

void	Logger::logToConsole(std::string str) {
	std::cout << str << std::endl;
}

void	Logger::logToFile(std::string str) {
	std::ofstream fout(file);
	fout << str << std::endl;
}

std::string	Logger::makeLogEntry(std::string message) {
	time_t now = time(0);
	char* dt = ctime(&now);
	std::string s = dt;
	s.erase('\n', 1);
	message = s + message;
	return message;
}

void	Logger::log(std::string const & dest, std::string const & message) {
	typedef void (Logger::*Test)(std::string message);
	Test test[] = {&Logger::logToConsole, &Logger::logToFile};
	std::string name[] = {"logToConsole", "logToFile"};
	for(int i = 0; i < 2; i++)
	{
		if(name[i] == dest)
			(this->*test[i])(makeLogEntry(message));
	}
}
