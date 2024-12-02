/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:13:54 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 21:27:37 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type): _name(name), _type(type)
{
	std::cout << _name << " joins the battle" << std::endl;
	return;
}

HumanA::~HumanA()
{
	// std::cout << _name << " leaves the battle" << std::endl;
	return;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attack with their " << _type.getType() << std::endl;
}
