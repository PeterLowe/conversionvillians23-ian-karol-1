// Date: 17 / 11 / 2023
// Names: Ian Perez Bunuel - Karol Loughlin

#include <iostream>

//print menu added
char printMenu();

//Converters - (Karol)
void celToFah();
void stAndLbToKg();
void LitersToGallons();
// Converters (Ian)
void degreesToRadians();
void centimetersToInches();

int main()
{
    char userChoice; // letter for user to pick conversion
    userChoice = printMenu(); // only print the menu once
    if (userChoice == 'A')
    {
        degreesToRadians();
    }

    else if (userChoice == 'B')
    {
        centimetersToInches();
    }

    else if (userChoice == 'C')
    {
        LitersToGallons();
    }

    else if (userChoice == 'f')
    {
        celToFah();
    }
    else if (userChoice == 'e')
    {
        stAndLbToKg();
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

void stAndLbToKg()
{
    // variables
    float stone = 0.0f;
    float pounds = 0.0f;
    float total = 0.0f;
    float kilos = 0.0f;

    // get user input 
    std::cout << "Enter the weight in stone without pounds you want to convert : ";
    std::cin >> stone;
    std::cout << "Enter any remaining pounds you want to convert : ";
    std::cin >> pounds;
    
    total = (stone * 6.35029) + (pounds * 0.4356);

    std::cout << total << " kilograms";

}




void degreesToRadians()
{
    // variables
    float radians = 0.0f;
    float degrees = 0.0f;
    const float CONVERTER_RADIAS_DEGREES = 57.2958f; // divide


    // get input
    std::cout << "Enter the Radians you want converted: ";
    std::cin >> degrees;

    // Calculate the degrees
    radians = degrees / CONVERTER_RADIAS_DEGREES;

    // Show Result
    std::cout << "The radian equivelent is: " << radians << std::endl;

}

void centimetersToInches()
{
    float centimeters = 0.0f;
    float inches = 0.0f;
    const float CM_TO_INCHES = 2.54f; // divide

    // Get Input
    std::cout << "Enter the centimeters you want converted: ";
    std::cin >> centimeters;

    // Do the Calculation
    inches = centimeters / CM_TO_INCHES;

    // Show result
    std::cout << "The inch equivelent is: " << inches << std::endl;

}

void LitersToGallons()
{
    float liters = 0.0f;
    float gallons = 0.0f;
    const float LITERS_TO_GALLONS = 4.546f; // divide

    // Get Input
    std::cout << "Enter the liters you want converted: ";
    std::cin >> liters;

    // Do the Calculation
    gallons = liters / LITERS_TO_GALLONS;

    // Show result
    std::cout << "The gallons equivelent is: " << gallons << std::endl;

}