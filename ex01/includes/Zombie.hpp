/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:14:21 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/03 21:08:33 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define	ZOMBIE			"Zombie "
#define BORN			" is born ..."
#define	DEAD			" is dying ... arrrggg"
#define	SHOUT			": BraiiiiiiinnnzzzZ..."
#define NO_NAME			"No Name, No Zombie ..."
#define	MISSING_NAME 	"Missing One Name ..."
#define TOO_MANY 		"Too Many Names ..."

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
