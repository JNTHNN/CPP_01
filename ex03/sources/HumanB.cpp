/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:13:52 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/27 20:27:26 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"


HumanB::HumanB(std::string name): _type(nullptr)
{
	_name = name;
	std::cout << _name << " joins the battle" << std::endl;
	return;
}

HumanB::~HumanB()
{
	// std::cout << _name << " leaves the battle" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &type)
{
	_type = &type;
}

void	HumanB::attack(void) const
{
	if (_type)
		std::cout << _name << " attack with their " << _type->getType() << std::endl;
	else
		std::cout << _name << " attack unarmed " << std::endl;
}