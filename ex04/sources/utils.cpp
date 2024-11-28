/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:27:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/28 18:15:01 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

bool	enoughArgs(const int nb)
{
		switch (nb)
	{
		case 1:
			std::cout << NO_ARG << std::endl;
			return false;
		case 2:
			std::cout << FEW_ARGS << std::endl;
			return false;
		case 3:
			std::cout << FEW_ARGS << std::endl;
			return false;
		case 4:
			break;
		default:
			std::cout << TOO_MANY << std::endl;
			return false;
	}
	return true;
}
