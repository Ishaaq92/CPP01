/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 23:10:27 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/17 10:39:10 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
		return (1);
	std::string val = av[1];
	if (!val.compare("DEBUG"))
		harl.complain("DEBUG");
	else if (!val.compare("INFO"))
		harl.complain("INFO");
	else if (!val.compare("WARNING"))
		harl.complain("WARNING");
	else if (!val.compare("ERROR"))
		harl.complain("ERROR");
	return (1);
}
