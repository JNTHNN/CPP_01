/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:40:54 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 20:49:39 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


Zombie::Zombie(): _name("")
{
	return;
}
Zombie::Zombie(std::string name): _name(name)
{
	std::cout << ZOMBIE << _name << BORN << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << ZOMBIE << _name << DEAD << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << _name << SHOUT << std::endl;
}
