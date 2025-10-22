/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:28:11 by isahmed           #+#    #+#             */
/*   Updated: 2025/10/22 11:58:26 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

std::string	freplace(const std::string& text, const std::string& s1, const std::string s2)
{
	size_t		index;

	index = text.find(s1);
	if (index == text.npos)
		return (text);
	return (text.substr(0, index) + s2 + freplace(text.substr(index + s1.length(), text.length()), s1, s2));
}

void	writeToFile(std::string fileName, std::string s)
{
	fileName.append(".replace");
	std::cout << fileName << std::endl;
	std::ofstream	MyFile(fileName.c_str());
	MyFile << s;
	MyFile.close();
}

int	main(int ac, char **av)
{
	std::string text;
	std::string line;

	if (ac != 4 || av[2][0] == '\0')
		return (1);
	std::fstream read(av[1]);
	if (!read.is_open())
		return (std::cout << "Invalid file" << std::endl, 1);
	while (getline(read, line))
		text.append(line).append("\n");
	text = freplace(text, av[2], av[3]);
	writeToFile(av[1], text);
	return (0);
}

// Testing

// 	Valid inputs
// valgrind ./a.out Makefile "CXX" "CPP"

// 	Empty file
// touch file
// valgrind ./a.out  file "test1" "test2"

// 	Invalid file
// valgrind ./a.out  invalid_file "test1" "test2"

// 	Empty text1
// valgrind ./a.out Makefile "" "test2"

//	Empty text2
// valgrind ./a.out Makefile "test2" "" 
