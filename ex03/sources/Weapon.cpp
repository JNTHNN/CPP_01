/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:14:07 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/27 20:27:38 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	setType(type);
	return;
}

Weapon::~Weapon()
{
	// std::cout << "The weapons " << _type << " has destroyed" << std::endl;
	return;
}


std::string	Weapon::getType(void) const
{
	return _type;
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}
