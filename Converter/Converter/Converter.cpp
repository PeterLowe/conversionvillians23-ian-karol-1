// Date: 17 / 11 / 2023
// Names: Ian Perez Bunuel - Karol Loughlin

#include <iostream>
// print menu added
char printMenu();

// Converters (Ian)
void degreesToRadians();

int main()
{
    char userChoice; // letter for user to pick conversion
    userChoice = printMenu(); // only print the menu once
    if (userChoice == 'A')
    {
        degreesToRadians();
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


    std::cout << "Enter your Choice : ";
    std::cin >> choice;
    return choice;
}





void degreesToRadians()
{
    // variables
    float radians = 0.0f;
    float degrees = 0.0f;
    const float CONVERTER_RADIAS_DEGREES = 57.2958f;


    // get input
    std::cout << "Enter the Radians you want converted: ";
    std::cin >> degrees;

    // Calculate the degrees
    radians = degrees / CONVERTER_RADIAS_DEGREES;

    // Show Result
    std::cout << "Radians: " << radians << std::endl;

}