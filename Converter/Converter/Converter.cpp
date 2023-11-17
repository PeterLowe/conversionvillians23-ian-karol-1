// Date: 17 / 11 / 2023
// Names: Ian Perez Bunuel - Karol Loughlin

#include <iostream>

//print menu added
char printMenu();

//Converters - (Karol)
void celToFah();
// Converters (Ian)
void radiansToDegrees();

int main()
{
    char userChoice; // letter for user to pick conversion
    userChoice = printMenu(); // only print the menu once
    if (userChoice == 'a')
    {
        radiansToDegrees();
    }
    else if (userChoice == 'f')
    {
        celToFah();
    }

	return 1;
}

char printMenu() // written by Ian / Karol
{
    char choice = ' ';// user input  choice
    std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
    std::cout << "[A] Degrees---<--->---Radians        [a]" << std::endl;
    std::cout << "[B] Centimeters-<--->--Feet & Inches  [b]" << std::endl;
    std::cout << "[C] Litres---<--->---Gallons        [c]" << std::endl;
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
    // variables
    float cel = 0.0f;
    float fah = 0.0f;


    // get user input
    std::cout << "Enter the degrees in Fahrenheit you want converted: ";
    std::cin >> fah;

    cel = (5 / 9.0f) * (fah - 32);

    std::cout << cel;

}




void radiansToDegrees()
{
    // variables
    float radians = 0.0f;
    float degrees = 0.0f;
    const double CONVERTER_RADIAS_DEGREES = 57.2957795;


    // get input
    std::cout << "Enter the Radians you want converted: ";
    std::cin >> radians;

    std::cout << CONVERTER_RADIAS_DEGREES;

}