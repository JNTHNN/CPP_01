/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:21:12 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/03 21:10:55 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie		*horde;
	const int	zombieCount = 5;

	horde = zombieHorde(zombieCount, "Monster");
	if (!horde)
		return EXIT_FAILURE;
	for (int i = 0; i < zombieCount; ++i)
		horde[i].announce();
	delete []horde;
	return EXIT_SUCCESS;
}
