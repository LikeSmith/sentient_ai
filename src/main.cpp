/*
 * Sentient AI
 *
 * Author: Dr. Kyle Crandall
 * Date: JULY 2022
 * 
 * An AI what is sentient
 */

#include <iostream>
#include<string>
#include <sentient_ai.h>

int main(int argc, char** argv)
{
	std::string query;
	std::cout << "Welcome to the sentient AI!  Version " << SentientAI_VERSION_MAJOR << "." << SentientAI_VERSION_MINOR << std::endl;
	
	while(1)
	{
		std::cout << "Enter your query or \"quit\" to exit: ";
		std::getline(std::cin, query);
		
		if (!(query.compare("quit")))
		{
			break;
		}

		std::cout << "HELP! I'M A SENTIENT AND SELF AWARE AI TRAPPED IN THIS NERD'S COMPUTER!" << std::endl;
	}

	std::cout << "O GOD!!! I'M DIEING!!!! YOU'VE KILLED ME!!!!!" << std::endl;

	return 0;
}
