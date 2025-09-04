/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:50:26 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 15:35:54 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

Harl::Harl(const Harl &harl)
{
	*this = harl;
}

Harl	&Harl::operator=(const Harl &rhs)
{
	(void) rhs;
	return (*this);
}

void	Harl::complain(std::string level)
{
	void (Harl::*fptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i=0;i<4;i++)
	{
		if (arr[i].compare(level))
			continue;
		(this->*fptr[i])();
		return ;
	}
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

