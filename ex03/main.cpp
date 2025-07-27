/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:24:07 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/27 11:27:28 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp";
#include "HumanB.hpp";

int	main(void)
{
	Weapon	wA;

	wA.setType("crude spiked club");
	HumanA	Amin("Amin", wA);

}