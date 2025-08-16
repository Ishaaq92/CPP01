#include <iostream>
#include <fstream>
#include <string>

std::string	freplace(const std::string& text, const std::string& s1, const std::string s2)
{
	size_t		index;

	index = text.find(s1);
	if (index == text.npos)
		return (text);
	return (text.substr(0, index) + s2 + freplace(text.substr(index + s1.length(), text.length()), s1, s2));
}

int	main(int ac, char **av)
{
	std::string text;
	std::string tmp;
	std::string	final;

	if (ac != 4)
		return (1);
	std::fstream read(av[1]);
	if (!read.is_open())
		return (std::cout << "Invalid file" << std::endl, 1);
	while (getline(read, tmp))
		text.append(tmp).append("\n");
	if (text.empty() || text.find(av[2]) == text.npos)
		return (std::cout << text << std::endl, 1);

	final = freplace(text, av[2], av[3]);
	std::cout << final << std::endl;
	return (0);
}
