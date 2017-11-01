/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 10:20:23 by itsuman           #+#    #+#             */
/*   Updated: 2017/11/01 14:57:31 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(void)
{
	Logger logger;
	logger.log("logToFile", "message1");
	logger.log("logToFile", "message2");
	logger.log("logToFile", "message2");
	return 0;
}
