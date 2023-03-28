#include <iostream>
#include <cmath>


int main(int argc, char** argv)
{
/*ax² + bx + c 
x1 = (-b + (Wurzel aus b² - 4ac)) / 2a
x2 = (-b - (Wurzel aus b² - 4ac)) / 2a
Wenn a & b = 0 : Ausgabe: "Keine Lösung"

Wenn b² -4ac negativ ist: Ausgabe: Lösung komplex
*/

//Eingabe von a , b und c (dazu ist deklaration nötig):
    double a;
    double b;
    double c;

    std::cout << "Gib die Variablen a, b und c aus dem Format ax² + bx + c ein:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    if (a == 0 and b == 0)
    {
        std::cout << "Die Lösung ist nicht eindeutig!" << std::endl;
        return 0;
    }

    //Diskriminante berechnen:
    double Diskriminante = ( b * b) - (4 * a * c);
    
    if(Diskriminante < 0)
    {
        std::cout << "Das Ergebnis ist komplex!" << std::endl;
        return 0;
    }
    //Diskriminante ist legal, jetzt können wir direkt einmal die Wurzel ziehen
    Diskriminante = std::sqrt(Diskriminante);

    //x1 und x2 berechnen, dazu initialisieren:
    double x1;
    double x2;

    x1 = (((b*-1) + Diskriminante) / (2 * a));
    x2 = (((b*-1) - Diskriminante) / (2 * a));

    std::cout << "Die Nullstellen liegen bei (" << x1 << "/0) und bei (" << x2 << "/0)" << std::endl;

    return 0;
}