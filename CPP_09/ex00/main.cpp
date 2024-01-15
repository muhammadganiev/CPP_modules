#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::fstream inputFile(av[1], std::ios::in);
	if (inputFile.fail())
	{
		std::cout << "Error: Failed to open input file\n";
		return 1;
	}
	try
	{
		bitcoinExchanger(inputFile);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}