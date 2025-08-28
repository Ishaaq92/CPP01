/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:50:26 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 17:30:31 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	// std::cout << "Harl was constructed" << std::endl;
}

Harl::~Harl(void)
{
	// std::cout << "Harl was destructed" << std::endl;
}

void	Harl::complain(std::string level)
{
	bool	is_level;

	void (Harl::*fptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	is_level = false;
	for (int i=0;i<4;i++)
	{
		if (level.compare(arr[i]) != 0 && is_level == false)
			continue;
		else if (level.compare(arr[i]) == 0)
			is_level = true;

		(this->*fptr[i])();
	}

}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger." << std::endl;
	 std::cout << "I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout <<   "You didn't put enough bacon in my burger!" << std::endl;
	std::cout <<  "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years, whereas you started working here just last month. " << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! " << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}
