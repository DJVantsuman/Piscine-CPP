/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:20:23 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 15:19:16 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(void)
{
	Logger logger;
	logger.log("logToConsole", "message1");
	logger.log("logToConsole", "message2");
	logger.log("logToFile", "message2");
	return 0;
}
