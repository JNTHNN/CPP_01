/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:34:44 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/02 19:06:38 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include "newZombie.cpp"

class Zombie
{
private:
	std::string	name;
public:
	Zombie(/* args */);
	~Zombie();

	void	announce(void);
	Zombie* newZombie( std::string name );
};

#endif