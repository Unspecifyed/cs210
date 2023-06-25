
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include "StringCounter.h"

StringCounter fileMapper()
{
    StringCounter myCounter;
    std::string line;
    std::string word;

    try
    {
        std::ifstream inputFile("CS210_Project_Three_Input_File.txt");
        while (std::getline(inputFile, line))
        {
            std::istringstream iss(line);
            if (iss >> word)
            {
                myCounter.addString(word);
            }
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

    return myCounter;
}
void printNumbers()
{
    StringCounter count = fileMapper();
    for (const auto &pair : count)
    {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}
void printHistogram()
{
    StringCounter count = fileMapper();
    for (const auto &pair : count)
    {
        std::string str(pair.second, '*');
        std::cout << pair.first << " " << str << std::endl;
    }
}
void printSearch()
{
    std::string word;
    std::cout << "Enter search word." << std::endl;
    StringCounter myMap = fileMapper();
    std::cin >> word;
    int count = myMap.getCount(word);
    std::cout << count << std::endl;
}
void printFile()
{
    StringCounter count = fileMapper();
    try
    {
        std::ofstream outputFile("frequency.dat");
        for (const auto &pair : count)
        {
            outputFile << pair.first << " " << pair.second << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
void menu()
{
    std::string input;
    int command;
    bool goodInput = false;
    bool exit = false;
    while (!goodInput || !exit)
    {
        std::cout << "Main menu" << std::endl;
        std::cout << "Enter Number 1-4" << std::endl;
        std::cout << "1 for search word" << std::endl;
        std::cout << "2 for print numbers" << std::endl;
        std::cout << "3 for print histogram" << std::endl;
        std::cout << "4 for exit" << std::endl;
        try
        {
            std::cin >> input;
            command = std::stoi(input);
            if (command > 0 && command < 5)
            {
                goodInput = true;
            }
            else
            {
                std::cout << "Input must be between 1 and 4." << std::endl;
            }
        }
        catch (std::exception &e)
        {
            std::cout << e.what();
        }

        switch (command)
        {
        case 1:
            printSearch();
            break;
        case 2:
            printNumbers();
            break;
        case 3:
            printHistogram();
            break;
        case 4:
            exit = true;

        default:
            break;
        }
    }
}

int main()
{
    menu();
    printFile();
    return 0;
}