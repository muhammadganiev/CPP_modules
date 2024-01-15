#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <ctime>
#include <cstring>

typedef struct	s_input
{
	std::string date;
	float value;
} t_input;

class FailToOpenFileException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

void bitcoinExchanger(std::fstream& inputFile);