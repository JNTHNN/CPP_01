/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:21 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/26 15:48:58 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

bool	checkNames(const int nb)
{
	switch (nb)
	{
		case 1:
			std::cout << NO_NAME << std::endl;
			return false;
		case 2:
			std::cout << MISSING_NAME << std::endl;
			return false;
		case 3:
			return true;
		default:
			std::cout << TOO_MANY << std::endl;
			return false;
	}
}

int	main(int argc, char **argv)
{
	if (checkNames(argc))
	{
		Zombie*	zombie(nullptr);
		zombie->newZombie(argv[1]);
		randomChump(argv[2]);
	}
	return 0;
}