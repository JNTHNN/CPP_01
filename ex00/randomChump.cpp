/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:54:09 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 17:27:48 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	// cree un zombie -> fait appel a newZombie
	// lui donne le name
	//se presente -> appel a announce
	//bye
	Zombie* zombie = nullptr;
	zombie->newZombie(name);
}