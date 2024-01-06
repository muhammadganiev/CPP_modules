#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange exchgRate(argv[1]);
		return (0);
	}
	else
	{
		std::cout << "Invalid Arguments" << std::endl;
		std::cout << "Usage: ./btc <file>" << std::endl;
		return (1);
	}
	return (0);
}