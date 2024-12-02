/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:54:06 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 12:39:36 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name);
	zombie->announce();
	delete zombie;
	return zombie;
}
