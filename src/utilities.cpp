#include "../include/utilities.h"

#include <iostream>
#include <string>
#include <vector>
#include <limits>

void ui::classroomPrint()
{
    std::cout << " __    _  __ __ _  _  _       " << std::endl;
    std::cout << "/  |  |_|(_ (_ |_)/ \\/ \\|V|   " << std::endl;
    std::cout << "\\__|__| |__)__)| \\\\_/\\_/| |   " << std::endl;
    std::cout << std::endl;
}

void ui::invalidPrint(int n)
{
    system("cls");
    std::cout << "Invalid Entry: Use 1";
    for(int i = 2; i <= n; i++)
    {
        std::cout << "," << i;
    }
    std::cout << " to Select Option" << std::endl;
    std::cout << " " << std::endl;
}

void ui::optionPrint(std::vector<std::string> v)
{
    std::vector<std::string>::iterator i;
    int j = 0;
    for(i = v.begin(); i != v.end(); ++i)
    {
        j++;
        std::cout << j << ". " << *i << std::endl;
    }
}

void input::intInput(std::string m, int i)
{
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << m;
    while(!(std::cin >> i))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << m;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
}