/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:28:14 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/28 19:41:43 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#define NO_ARG		"No Arg, No Party : ./sed filename s1 s2"
#define	FEW_ARGS	"Almost ! : ./sed filename s1 s2"
#define	TOO_MANY	"Too many !!! : ./sed filename s1 s2"
#define	EMPTY		"Filename or s1 can't be empty"
#define	ERROR		"Error with file "
#define	SUFFIX		".replace"

#include <iostream>
#include <fstream>
#include "./Parameters.hpp"

bool	enoughArgs(const int nb);


#endif