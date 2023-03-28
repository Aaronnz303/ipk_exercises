#include <iostream>
#include <cmath>

void collatz(int number)
{
    std::cout << number << std::endl;
    
    while (number != -17 && number != -5 && number != -1 && number != 0 && number != 1) 
    {
        if (number % 2 == 0)
        {
           number = number / 2;
        }
        else
        {
            number = (( number * 3) + 1);
        }
        std::cout << "Zwischenergebnis: " << number << std::endl;
    }

    std::cout << "Endergebnis: " << number << std::endl;
}

int main(int argc, char** argv)
{
    int number;
    std::cout << "Bitte gib die zu berechnende Collatz-Nummer ein: ";
    std::cin >> number;

    collatz(number);

    return 0;
}