// Date: 17 / 11 / 2023
// Names: Ian Perez Bunuel - Karol Loughlin

#include <iostream>
//print menu added
char printMenu();

//Converters - Karol
void celToFah();

int main()
{
    char choice = printMenu();

	return 1;
}

char printMenu() // written by leader
{
    char choice = ' ';// user input  choice
    std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
    std::cout << "[A] Degrees---<--->---Radians        [a]" << std::endl;
    std::cout << "[B] Centimeters-<--->--Feet & Inches  [b]" << std::endl;
    std::cout << "[C] Litres---<--->---Gallons        [c]" << std::endl;

    std::cout << "[Q] Exit        [---]   Exit           [q]" << std::endl;
    std::cout << "Enter your Choice : ";
    std::cout << "[D] Mpg---------<--->---L/100km        [d]" << std::endl;
    std::cout << "[E] Kilograms---<--->---Stone & Pounds        [e]" << std::endl;
    std::cout << "[F] Celsius---<--->---Fahrenheit     [f]" << std::endl;
    std::cout << "[Q] Exit------[---]----Exit           [q]" << std::endl;
    std::cout << "Enter your Choice : ";
    std::cin >> choice;
    return choice;
}

void celToFah()
{
    float cel = 0.0f;
    float fah = 0.0f;
    const float CEL_TO_FAH = cel * 9 / 5 + 32;
}