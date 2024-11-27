/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:13:52 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/27 17:51:41 by jgasparo         ###   ########.fr       */
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
}

void	HumanB::setWeapon(Weapon &type)
{
	_type = &type;
}

void	HumanB::attack() const
{
	if (_type)
		std::cout << _name << " attack with their " << _type->getType() << std::endl;
	else
		std::cout << _name << " attack unarmed " << std::endl;
}