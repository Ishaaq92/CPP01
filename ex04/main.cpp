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
	// std::ofstream	newFile(fileName.append(".replace"));

	fileName.append(".replace");
	std::cout <<fileName<< std::endl;
	std::ofstream	MyFile(fileName.c_str());

	MyFile << s;
	MyFile.close();
}

int	main(int ac, char **av)
{
	std::string text;
	std::string tmp;
	std::string	s;

	if (ac != 4)
		return (1);
	std::fstream read(av[1]);
	if (!read.is_open())
		return (std::cout << "Invalid file" << std::endl, 1);
	while (getline(read, tmp))
		text.append(tmp).append("\n");
	if (text.empty())
		return (std::cout << text << std::endl, 1);

	s = freplace(text, av[2], av[3]);
	// std::cout << final << std::endl;
	// std::string	file(av[1]);
	writeToFile(av[1], s);
	return (0);
}
