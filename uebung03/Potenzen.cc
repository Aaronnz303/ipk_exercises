#include <iostream>
#include <cmath>

namespace power
{
    int iterative(int q, int n)
    {
        int Zaehler = 0;
        int Ergebnis = 1;

        while (n > Zaehler)
        {
            Ergebnis = Ergebnis * q;

            Zaehler++;
        }
    
        return Ergebnis;
    }
    
    int recursive(int q, int n)
    {
        int Zaehler = 0;
        if (n > Zaehler)
        {
            return ( q * recursive(q , n - 1));
        }
        else
        {
            return 1;
        }
    }
}

int main(int argc, char** argv)
{
    int gZahl;
    /*unsigned*/ int potenz;

    std::cout << "Gib die ganze Zahl q und ihre Potenz und ihre Potenz n ein:" << std::endl;
    std::cout << "q: ";
    std::cin >> gZahl;
    std::cout << "n: ";
    std::cin >> potenz;

    if (potenz < 0)
    {
        std::cout << "Die Potenz muss positiv sein!" << std::endl;
        return 0;
    }

    std::cout << "Iterativ: " << power::iterative(gZahl, potenz) << std::endl;
    std::cout << "Rekursiv: " << power::recursive(gZahl, potenz) << std::endl;
    
    return 0;
}