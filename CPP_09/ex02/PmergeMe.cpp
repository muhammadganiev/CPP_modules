#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **argv)
{
	this->_k = 5;
    this->fillAndPrint(argv);
	this->sortContainers();
}

PmergeMe::PmergeMe(const PmergeMe &object)
{
    *this = object;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {

    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::printVec()
{
	std::vector<int>::iterator	it;

	for (it = this->_vec.begin(); it != this->_vec.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
	
}

void    PmergeMe::fillAndPrint(char **argv)
{
	int i = 1;
	std::cout << "Before:";
	while (argv[i])
	{
		this->_vec.push_back(atoi(argv[i]));
		this->_deque.push_back(atoi(argv[i]));
		std::cout << " " << argv[i];
		i++;
	}
	std::cout << std::endl;
}

void	PmergeMe::dequeSort(int begin, int end)
{
	if (end - begin > this->_k)
	{
		int mid = (begin + end) / 2;
		dequeSort(begin, mid);
		dequeSort(mid + 1, end);
		this->mergeDeque(begin, mid, end);
	}
	else
		this->dequeInsertion(begin, end);
}

void	PmergeMe::vecSort(int begin, int end)
{
	if (end - begin > this->_k)
	{
	printVec();
		int mid = (begin + end) / 2;
		vecSort(begin, mid);
		vecSort(mid + 1, end);
		this->mergeVec(begin, mid, end);
	}
	else
		this->vecInsertion(begin, end);
}

void	PmergeMe::vecInsertion(int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		int tmp = this->_vec[i + 1];
		int j = i + 1;
		while (j > begin && this->_vec[j - 1] > tmp)
		{
			this->_vec[j] = this->_vec[j - 1];
			j--;
		}
		this->_vec[j] = tmp;
	}
}

void	PmergeMe::dequeInsertion(int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		int tmp = this->_deque[i + 1];
		int j = i + 1;
		while (j > begin && this->_deque[j - 1] > tmp)
		{
			this->_deque[j] = this->_deque[j - 1];
			j--;
		}
		this->_deque[j] = tmp;
	}
}

void	PmergeMe::mergeDeque(int begin, int mid, int end)
{
	int	n1 = mid - begin + 1;
	int n2 = end - mid;
	int	rightIdx = 0;
	int leftIdx = 0;

	std::deque<int>	left(this->_deque.begin() + begin, this->_deque.begin() + mid + 1);
	std::deque<int>	right(this->_deque.begin() + mid + 1, this->_deque.begin() + end + 1);

	for (int i = begin; i <= end; i++)
	{
		if (rightIdx == n2)
		{
			this->_deque[i] = left[leftIdx];
			leftIdx++;
		}
		else if (leftIdx == n1)
		{
			this->_deque[i] = right[rightIdx];
			rightIdx++;
		}
		else if (right[rightIdx] > left[leftIdx])
		{
			this->_deque[i] = left[leftIdx];
			leftIdx++; 
		}
		else
		{
			this->_deque[i] = right[rightIdx];
			rightIdx++;
		}
	}
}

void	PmergeMe::mergeVec(int begin, int mid, int end)
{
	int	n1 = mid - begin + 1;
	int n2 = end - mid;
	int	rightIdx = 0;
	int leftIdx = 0;

	std::vector<int>	left(this->_vec.begin() + begin, this->_vec.begin() + mid + 1);
	std::vector<int>	right(this->_vec.begin() + mid + 1, this->_vec.begin() + end + 1);

	for (int i = begin; i <= end; i++)
	{
		if (rightIdx == n2)
		{
			this->_vec[i] = left[leftIdx];
			leftIdx++;
		}
		else if (leftIdx == n1)
		{
			this->_vec[i] = right[rightIdx];
			rightIdx++;
		}
		else if (right[rightIdx] > left[leftIdx])
		{
			this->_vec[i] = left[leftIdx];
			leftIdx++; 
		}
		else
		{
			this->_vec[i] = right[rightIdx];
			rightIdx++;
		}
	}
}

void	PmergeMe::sortContainers()
{
	clock_t	start, finish;
	double	vecTime, dequeTime;

	std::cout << "After: ";

	start = clock();
	this->vecSort(0, this->_vec.size() - 1);
	finish = clock();
	vecTime = ((double)(finish - start)) / 1000000;

	start = clock();
	dequeSort(0, this->_deque.size() - 1);
	finish = clock();
	dequeTime = ((double)(finish - start)) / 1000000;

	printVec();
	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : "  << std::fixed << vecTime << std::endl;
	std::cout << "Time to process a range of " << this->_deque.size() << " elements with std::deque : " << std::fixed << dequeTime << std::endl;
}
