#include <iostream>
#include <cmath>

double root_iterative(double q, int n, int steps)
{
    
    if(n <= 0)
    {
        std::cout << "q muss positiv und größer als 0 sein!" << std::endl;
        return 0;
    }

    double wurzel = 1;
    for(int i = 0; i < steps; i++)  //Formel hier ist bisschn Wild, tbh ich kopier das von Dionyssis
    {
        double amin1 = std::pow(wurzel, n-1);
        wurzel = wurzel +((q/amin1 - wurzel) /n ); 
    }

    return wurzel;

}

void test_root(double q, int n, int steps)
{

}

int main()
{
    int n = 3;
    double q = 26.8;
    int steps = 10;

    std::cout << "Die " << n << ". Wurzel von " << q << " in " << steps << " Schritten berechnet beträgt " << root_iterative(q, n, steps)
}