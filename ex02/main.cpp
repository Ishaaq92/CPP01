/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:31:12 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 16:14:29 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	str = "This is a test";
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &(stringREF) << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

