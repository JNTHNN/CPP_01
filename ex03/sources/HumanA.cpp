/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:13:54 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/27 17:39:41 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &type): _type(type)
{
	_name = name;
	std::cout << _name << " joins the battle" << std::endl;
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack() const
{
	std::cout << _name << " attack with their " << _type.getType() << std::endl;
}