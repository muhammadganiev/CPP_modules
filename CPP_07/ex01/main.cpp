#include "iter.hpp"

// void	printElem(int const &elem)
// {
// 	std::cout << elem << std::endl;
// }

int	main()
{
	int intArr[11] = {0, 1, 2, 3, 4, 5, 42, 42, 42, 42, 42};
	iter(intArr, 11, printElem);

	std::cout <<"-----------------------"<< std::endl;

	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(charArr, 5, printElem);
	return (0);
}