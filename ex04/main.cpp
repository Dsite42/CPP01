/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:12 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/27 10:17:15 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static int openFiles(char *inputFileName, std::string nameOutputfile,
					std::ifstream *inputFile, std::ofstream *outputFile)
{
	(*inputFile).open(inputFileName, std::fstream::in);
	(*outputFile).open(nameOutputfile, std::fstream::out);
	if (!inputFile || !outputFile)
	{
        std::cerr << "Failed to open files!" << std::endl;
		(*inputFile).close();
		(*outputFile).close();

        return (1);
    }
	return (0);
}

int main(int argc, char **argv)
{
	std::string nameOutputfile;

	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 0);
	nameOutputfile = nameOutputfile + argv[1] + ".replace";
	
	
	std::ifstream inputFile;
	std::ofstream outputFile;
	std::string line;
	if (openFiles(argv[1], nameOutputfile, &inputFile, &outputFile))
		return (1);
	std::string to_find = *(argv + 2);
	std::string to_replace = *(argv + 3);

	std::string::size_type found;
	size_t end_last_found = 0;
	std::string replaced_line;
	while(std::getline(inputFile, line))
	{
		
		replaced_line.clear();
		end_last_found = 0;
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

		if (!inputFile.eof())
			outputFile << replaced_line << std::endl;
		else
			outputFile << replaced_line ;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
