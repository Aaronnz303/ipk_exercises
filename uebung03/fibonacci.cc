#include <iostream>

int fibonacci(long int n)
{
    if(n == 1){                         //Das erste Folgenglied manuell ausgeben
        std::cout << 0 << std::endl;
        return 0;    
    }
    
    long int a = 0;                //erstes Folgenglied definieren
    long int b = 1;                //zweites Folgenglied definieren
    long int c;                    //Variable für das neue Folgenglied aus den vorherigen Gliedern
    std::cout << a << " ; " << b;     //Die ersten beiden Folgenglieder manuell ausgeben 
    for(long int i = 3; i <= n; i++){  //ab dem dritten Folgeglied automatisiert ausgeben bis i den eingegebenen Wert n erreicht 
        c = a + b;                      //werden die zwei vorherigen Folgenglieder a und b addiert und dadurch das neue Folgenglied c gebildet
        std::cout << " ; " << c;          //das neue Folgenglied wird im Terminal ausgegeben
        a = b;                          //und die Folgeglieder werden so geändert, dass a wieder das vorletzte und b wieder das letzte ist
        b = c;                          //dieser Prozess wird so lange wiederholt bis das gewünschte Folgenglied errreicht wurde
    }
    std::cout << std::endl;
    return 0;
}

//In der main Funktion wird der gewünschte Wert für n eingelesen also bis zu welchem Folgenglied die Fibonacci Folge ausgerechnet werden soll
int main()
{
    long int n;
    std::cout << "Geben Sie an bis zu welchem Folgenelement Sie die Fibonacci Folge gegeben haben möchten: ";
    std::cin >> n;
    fibonacci(n);
}

