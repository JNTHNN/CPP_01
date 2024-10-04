/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:40:54 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 21:13:45 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


Zombie::Zombie(): _name("")
{
	return;
}
Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Zombie " << _name << " is born ..." << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dying ... arrrggg" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

