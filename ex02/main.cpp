/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:41:42 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/30 18:25:04 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR(&str);
	std::string	&stringREF(str);

	std::cout << "STRING	ADDRESS : " << &str << std::endl;
	std::cout << "STRINGPTR	ADDRESS : " << &stringPTR << std::endl;
	std::cout << "STRINGREF	ADDRESS : " << &stringREF << std::endl;

	std::cout << "---------------------" << std::endl;
	
	std::cout << "STRING	VALUE : " << str << std::endl;
	std::cout << "STRINGPTR	VALUE : " << *stringPTR << std::endl;
	std::cout << "STRINGREF	VALUE : " << stringREF << std::endl;

	return EXIT_SUCCESS;
}
