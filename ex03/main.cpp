/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:34:26 by isahmed           #+#    #+#             */
/*   Updated: 2025/10/22 11:26:53 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	wA = Weapon("crude spiked club");

	HumanA	bob("Bob", wA);
	bob.attack();
	wA.setType("some other type of club");
	bob.attack();

	Weapon wB = Weapon("crude spiked club");

	HumanB jim("Jim", NULL);
	jim.setWeapon(&wB);
	jim.attack();
	wB.setType("some other type of club");
	jim.attack();

	return (0);
}
