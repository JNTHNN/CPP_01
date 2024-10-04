/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:21 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 21:31:05 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "No Name, No Zombie ..." << std::endl;
	else
	{
		Zombie	*zombie = nullptr;
		zombie->newZombie(argv[1]);
		randomChump(argv[2]);
		delete zombie;
	}
	return 0;
}