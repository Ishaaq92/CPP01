/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 23:10:27 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 17:26:12 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::filter(std::string level)
{
	bool valid = false;
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i=0;i<4;i++)
		if (0 == arr[i].compare(level))
			valid = true;
	if (!valid)
		return ;
	switch(level.c_str()[0])
	{
		case 'D':
			this->complain("DEBUG");
			break;
		case 'I':
			this->complain("INFO");
			break;
		case 'W':
			this->complain("WARNING");
			break;
		case 'E':
			this->complain("ERROR");
			break;
	}
}

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
		return (1);
	std::string val = av[1];
	harl.filter(val);
	return (1);
}
