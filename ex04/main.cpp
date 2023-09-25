/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:12 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/25 18:20:46 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{

	if (argc != 4)
		return (std::cout << "Wrong number of arguments", 0);
	
	
	std::ifstream inputFile;
	std::ofstream outputFile;
	std::string line;
	inputFile.open("input.txt", std::fstream::in);
	outputFile.open("output.txt", std::fstream::out);
	if (!inputFile || !outputFile)
	{
        std::cerr << "Failed to open files!" << std::endl;
		inputFile.close();
		outputFile.close();

        return (1);
    }

	std::string to_find = *(argv + 2);
	std::string to_replace = *(argv + 3);

	std::string::size_type found;
	size_t end_last_found = 0;
	std::string replaced_line;
	while(std::getline(inputFile, line))
	{
		
		found = line.find(to_find);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				replaced_line.append(line,end_last_found,found - end_last_found);
				replaced_line += to_replace;
				end_last_found = found + to_find.length();
				found = line.find(to_find, end_last_found);
				if (found == std::string::npos)
					replaced_line.append(line, end_last_found,line.length());
			}
		}
		else
			replaced_line = line;
		outputFile << replaced_line << std::endl;
		std::cout << replaced_line <<std::endl;
	
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
