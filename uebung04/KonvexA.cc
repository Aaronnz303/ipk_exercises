#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <utility>


//Nur Aufgabe a) funktioniert!!
std::vector<std::array<double, 2>> read_points_from_file(std::string filename)
{
    double x;
    double y;

    std::vector<std::array<double, 2>> punktevector;

    std::ifstream file(filename);

    while (file >> x >> y)  //solange im file "filename" (welches hier in der main-funktion als pointfile.txt definiert wird) in jeder Zeile ein double wert, der x und ein double-wert der y zugeordnet werden kann, steht, mache folgendes:
    {
        std::array<double, 2> neuerPunkt;
        neuerPunkt[0] = x;
        neuerPunkt[1] = y;
        
        punktevector.push_back(neuerPunkt);
    }


return punktevector;
}

int main(int argc, char** argv)
{
    std::vector<std::array<double, 2>> PunkteListe = read_points_from_file("pointfile.txt");

    for (std::array<double, 2>& Punkt : PunkteListe)
    {
        std::cout << "(" << Punkt[0] << ", " << Punkt[1] << ")" << std::endl;
    }
    
    return 0;
} 