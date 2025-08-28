/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:34:26 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/28 15:36:30 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	wA;

	wA.setType("crude spiked club");
	HumanA	Amin("Amin", wA);
	Amin.attack();
	wA.setType("some other type of club");
	Amin.attack();

	Weapon wB;
	wB.setType("crude spiked club");
	HumanB Bob("Bob", NULL);

	Bob.setWeapon(&wB);
	Bob.attack();
	wB.setType("some other type of club");
	Bob.attack();

}
