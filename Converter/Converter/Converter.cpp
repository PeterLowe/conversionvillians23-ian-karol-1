// Date: 17 / 11 / 2023
// Names: Ian Perez Bunuel - Karol Loughlin

#include <iostream>

int main()
{
	return 1;
}

char printMenu() // written by Karol
{
    char choice = ' ';// user input  choice
    std::cout << "Please enter a upper case letter to convert from left to right and lower case to convert from right to left." << std::endl;

    std::cout << "[D] Mpg---------<--->---L/100km        [d]" << std::endl;
    std::cout << "[E] Kilograms---<--->---Stone & Pounds        [e]" << std::endl;
    std::cout << "[F] Celsius---<--->---Fahrenheit     [f]" << std::endl;
    std::cout << "[Q] Exit------[---]----Exit           [q]" << std::endl;
    std::cout << "Enter your Choice : ";
    std::cin >> choice;
    return choice;
}