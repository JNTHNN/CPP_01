/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:21 by jgasparo          #+#    #+#             */
/*   Updated: 2024/10/04 17:28:26 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "No Name, No Zombie ..." << std::endl;
	else
		randomChump(argv[1]);
	return 0;
}