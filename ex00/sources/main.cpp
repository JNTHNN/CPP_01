/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:21 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 20:50:09 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	zombie("Stacky");
	zombie.announce();

	randomChump("Phantom");
	
	Zombie *zombax = newZombie("Heap");
	zombax->announce();
	delete zombax;
	
	return 0;
}
