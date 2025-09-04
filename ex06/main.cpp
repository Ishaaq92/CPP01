/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 23:10:27 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 16:32:36 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::filter(std::string level)
{
	int	val;

	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	val = -1;
	for (int i=0;i<4;i++)
		if (0 == arr[i].compare(level))
			val = i;
	if (val == -1)
		return ;
	switch(val)
	{
		case (0):
			this->complain("DEBUG");
			break;
		case (1):
			this->complain("INFO");
			break;
		case (2):
			this->complain("WARNING");
			break;
		case (3):
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
