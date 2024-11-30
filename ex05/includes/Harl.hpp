/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:48:34 by jgasparo          #+#    #+#             */
/*   Updated: 2024/11/30 18:25:47 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#define DEBUG	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
#define INFO	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
#define WARNING	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR	"This is unacceptable ! I want to speak to the manager now."
#define GOOD	"ALL IS GOOD MY FRIEND"

#include <iostream>
#include <string>


class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif