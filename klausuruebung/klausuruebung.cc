#include <map>
#include <iostream>
#include <algorithm>
#include "head.hh"

int main()
{
    
    std::pair<double, double> Dreieck1Null = std::make_pair(0, 0);
    std::pair<double, double> Dreieck1Eins = std::make_pair(2, 0);
    std::pair<double, double> Dreieck1Zwei = std::make_pair(0, 2);

    Triangle DA(Dreieck1Null, Dreieck1Eins, Dreieck1Zwei);
    DA.printdreieck();

    std::cout << " " << std::endl;
    std::pair<double, double> Dreieck2Null = std::make_pair(0, 2);
    std::pair<double, double> Dreieck2Eins = std::make_pair(6, 3);
    std::pair<double, double> Dreieck2Zwei = std::make_pair(0, 6);

    Triangle DB(Dreieck2Null, Dreieck2Eins, Dreieck2Zwei);
    DB.printdreieck();

    std::cout << " " << std::endl;

    Triangle DC = DA+DB;
    DC.printdreieck();

    std::cout << " " << std::endl;


    return 0;
}       