/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:24:07 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/27 11:37:12 by ishaaq           ###   ########.fr       */
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
	HumanB Bodrul("Bodrul");

	Bodrul.setWeapon(wB);
	Bodrul.attack();
	wB.setType("some other type of club");
	Bodrul.attack();

}