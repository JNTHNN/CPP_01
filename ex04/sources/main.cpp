/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:59:33 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/28 19:40:42 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

int	main(int argc, char *argv[])
{
	if (enoughArgs(argc))
	{
		Parameters	args(argv[1], argv[2], argv[3]);
		if (args.getFilename().empty() || args.getS1().empty())
		{
			std::cout << EMPTY << std::endl;
			return EXIT_FAILURE;
		}
		args.setOutputFile();
		args.replaceS1S2();
	}
	return EXIT_FAILURE;	
}