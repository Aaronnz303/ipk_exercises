#include <iostream>
#include <string>
#include <utility>
#include <stdexcept>
#include <cmath>

int potenz(int basis, int potenz)
{
    int ergebnis = 1;
    for(int i = 0; i < potenz; i++)
    {
        ergebnis *= basis;
    }
    return ergebnis;
}

long int parse_int(std::string number)
{
    long int parsed_int = 0;
    long int multiplier = 0;
    if
    //Konzept: string hat x stellen, also rechnen wir 1. element des strings * (1 + x nullen) + 2. ... bis x. Element
    for(int i = 0; i < number.size(); i++)
    {   
        //std::cout << " " << std::endl;
        char aktuellc = number[i];
        long int aktuelli;
        //std::cout << "int: " << aktuelli << std::endl;
        //std::cout << number[i] << " = " << aktuelli << std::endl;
        //std::cout << " " << std::endl;
        //Wir sind beim 1. Element, der String hat 12 nummern, müsste also mit 10* 12 multipliziert werden
        
        multiplier = potenz(10, (number.size() - 1 - i));
        //std::cout << 10 << "^" << number.size() - 1 - i << " = " << multiplier << std::endl;

        parsed_int = parsed_int + (aktuelli * multiplier);
        //std::cout << parsed_int - (aktuelli * multiplier) << " + " << number[i] << "*" << multiplier << " ( " << (aktuelli* multiplier) << " ) = " << parsed_int;

        
        switch (aktuellc) 
        {
            case ' ':
            // handle blank spaces
            break; // leave switch statement
            case '+':
            case '-':
            // handle plus or minus
            break; // leave switch statement
            case '0': aktuelli = aktuellc - 48;
            case '1': aktuelli = aktuellc - 48;
            case '2': aktuelli = aktuellc - 48;
            case '3': aktuelli = aktuellc - 48;
            case '4': aktuelli = aktuellc - 48;
            case '5': aktuelli = aktuellc - 48;
            case '6': aktuelli = aktuellc - 48;
            case '7': aktuelli = aktuellc - 48;
            case '8': aktuelli = aktuellc - 48;
            case '9': aktuelli = aktuellc - 48;
            // handle digits
            break; // leave switch statement
            default:
            // handle any other (invalid) symbol
        }

    }
    return parsed_int;
}

int main()
{                     //30.323.010.407
    std::string viel = "9876";
    //std::cout << viel.size() << std::endl;
    long int vielint = parse_int(viel);
    std::cout << vielint << std::endl;
    
    return 0;
}