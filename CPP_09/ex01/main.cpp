#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
        std::cerr << "Usage: ./RPN 'expression'";
        return (EXIT_FAILURE);
    }
	
	RPN::param = argv[1];
	RPN::word_count(RPN::param);
    std::string arr[RPN::count];
	
    if (RPN::fill_and_check_string(arr) == false)
	{
		std::cerr << "The token must be a digit or operation '+ - / *'";
		return(EXIT_FAILURE);
	}

	if (RPN::polish_handle(arr) == true)
	{
		if (RPN::_sVal.size() == 1 && RPN::_sOperant.size() == 0)
			std::cout << RPN::_sVal.top();
		else
			std::cout << "invalid input: not enough operations!";
	}
	else
	{
		std::cout << "invalid input: not enough numbers";
		return(EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
}