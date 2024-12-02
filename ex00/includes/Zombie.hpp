/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:34:44 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 15:29:14 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
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

void 	randomChump(std::string name);

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		Zombie* newZombie(std::string name);

	private:
		std::string	_name;
};

#endif
