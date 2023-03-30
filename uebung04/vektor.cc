#include <iostream>
#include <vector>
#include <utility>
#include <cmath>


void printvector(const std::vector<double>& v)
{
    std::cout << "{";
    for (auto i = 0; i < v.size(); i++)
    {
        std::cout << "[" << v[i] << "]";
    }
    std::cout << "}" << std::endl;
}

std::vector<double> reverse(const std::vector<double>& v)
{
    std::vector<double> creversed(v.size());
    std::cout << "Reverse-Vector Groesse: " << creversed.size() << std::endl;

    for (double Zaehler = 0; Zaehler < creversed.size(); Zaehler++)
    {
        creversed[Zaehler] = v[creversed.size() - 1 - Zaehler];
    }
    return creversed;
}

void vrunden(std::vector<double>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = std::round(v[i]);
    }
}

void umkehren(std::vector<double>& v)
{
    for (int i = 0; i < (v.size()-1) / 2; i++)
    {   
        std::cout << "Tausche " << v[i] << " und " << v[v.size() -1 - i] << ": " << std::endl;
        std::swap(v[i], v[v.size() -1 - i]);
    }
}


int main(int argc, char** argv)
{
    std::vector<double> v1 = {0,1,2,3,4,5,6,7};
    std::vector<double> v2;
    std::vector<double> v3(5);
    std::vector<double> v4 = {-4,6,2,38,13,-25,99,-246, 3457, 5,1};
    
    std::vector<double> a(8);
    {a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;
    a[5] = 5;}
    std::vector<double> b = {2,4,5,1,7,0,5,2,-5,100};
    std::vector<double> c1 = {0,1,2,3,4,5,6};
    std::vector<double> c2;  
    std::vector<double> d = {1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0};
      
    /*a)

    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << std::endl;
    }*/

    /*b)
    double bgross = b[0];
    double bklein = b[0];
    for (size_t i = 0; i < b.size(); i++)
    {
        if (b[i] < b[i + 1])
        {   
            if(b[i] < bklein)
            {
                bklein = b[i];
            }
        }
        else
        {
             if(b[i] < bklein)
            {
                bklein = b[i + 1];
            }
        }
        std::cout << "Aktueller kleinster Wert: " << bklein << std::endl;
    }
    
    std::cout << " " << std::endl;

    for (size_t i = 0; i < b.size(); i++)
    {
        if (b[i] > b[i + 1])
        {   
            if(b[i] > bgross)
            {
                bgross = b[i];
            }
        }
        else
        {
             if( b[i +1] > bgross)
            {
               bgross = b[i + 1];
            }
        }
        std::cout << "Aktueller groesster Wert: " << bgross << std::endl;
    }
    
    std::pair<double, double> grossklein = std::make_pair(bgross, bklein);
    std::cout << "Groesster Wert: " << grossklein.first << std::endl;
    std::cout << "Kleinster Wert: " << grossklein.second << std::endl;
    */

    /*c)
    //Man könnte hier auch in der main-Funktion die Reversed-Einträge mit einer Schleife
    //ausgeben, ist aber für die Aufgabenstellung irrelevant, also kommt die 
    //Ausgabe in eine eigene Funktion
    printvector(reverse(c1));
    printvector(reverse(c2));
    */
    
    /*d)
    std::cout << "Ungerundet:  " << std::flush;
    printvector(d);
    
    std::cout << "Gerundet: " << std::flush;
    vrunden(d);
    printvector(d);
    */

    /*e)

    umkehren(v1);
    umkehren(v4);
    
    printvector(v1);
    printvector(v4);
    printvector(v2);
    */
    
    return 0;
}