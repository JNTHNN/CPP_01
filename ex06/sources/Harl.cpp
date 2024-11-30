/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:34:45 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/30 10:02:47 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t	i(0);
	for (; i < 4; i++)
	{
		if (complain[i] == level)
			break;
	}
	switch (i)
	{
		case 0:
			(this->*levels[0])();
		case 1:
			(this->*levels[1])();
		case 2:
			(this->*levels[2])();
		case 3:
			(this->*levels[3])();
			break;
		default:
			std::cout << OTHER << std::endl;
			break;
	}
}
