/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:18:26 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 15:31:25 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(): _name("")
{
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

void	Zombie::setName(std::string name)
{
	_name = name;
}
