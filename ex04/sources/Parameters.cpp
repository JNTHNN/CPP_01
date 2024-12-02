/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parameters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:08:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/02 22:13:28 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Parameters.hpp"

Parameters::Parameters(const std::string &file, const std::string &str1, const std::string &str2): filename(file), s1(str1), s2(str2), inputFile(NULL), outputFile(NULL)
{
	inputFile = new std::ifstream(file.c_str());
	if (!inputFile->is_open())
		std::cout << ERROR << file << std::endl;
	return;
}

Parameters::~Parameters()
{
	if (inputFile != NULL && inputFile->is_open())
	{
		inputFile->close();
		if (outputFile != NULL && outputFile->is_open())
			outputFile->close();
		delete outputFile;
	}
	delete inputFile;
	return;
}

const std::string	&Parameters::getFilename(void)
{
	return filename;
}

const std::string	&Parameters::getS1(void) const
{
	return s1;
}

const std::string	&Parameters::getS2(void) const
{
	return s2;
}

void	Parameters::setOutputFile(void)
{
	if (inputFile->is_open())
	{
		outputFile = new std::ofstream(filename + SUFFIX);
		if (!outputFile->is_open())
			std::cout << ERROR << filename + SUFFIX << std::endl;
	}
}

void	Parameters::replaceS1S2(void)
{
	std::string	line;

	while (std::getline(*inputFile, line))
	{
		size_t occurence(0);
		while ((occurence = line.find(s1, occurence)) != std::string::npos)
		{
			std::string	before(line.substr(0, occurence));
			std::string	after(line.substr(occurence + s1.length()));
			
			line = before + s2 + after;

			occurence += s2.length();
		}
		*outputFile << line << std::endl;
	}
	
}
