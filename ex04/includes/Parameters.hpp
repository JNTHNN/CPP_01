/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parameters.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:04:57 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/30 18:25:33 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARAMETERS_HPP
# define PARAMETERS_HPP

#include "utils.hpp"
#include <iostream>
#include <string>
#include <fstream>

class Parameters
{
	private:
		std::string		filename;
		std::string		s1;
		std::string		s2;
		std::ifstream	*inputFile;
		std::ofstream	*outputFile;
	public:
		Parameters(const std::string &file, const std::string &str1, const std::string &str2);
		~Parameters();

		const	std::string &getFilename();
		const	std::string &getS1();
		const	std::string &getS2();
		void	setOutputFile();
		void	replaceS1S2();

};

#endif