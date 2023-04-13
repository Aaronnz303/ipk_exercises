#ifndef HEAD.HH
#define HEAD.HH

#include <utility>
#include <string>
#include <vector>

//Aufgabe a)
class Triangle
{
    private:
        std::pair<double, double> _null;
        std::pair<double, double> _eins;
        std::pair<double, double> _zwei;

    public:
        Triangle(std::pair<double, double> null, std::pair<double, double> eins, std::pair<double, double> zwei)
            : _null(null), _eins(eins), _zwei(zwei)
        { }

        ~Triangle() 
        {
            bool exists = 0;
        }

        //Aufgabe b)
        std::pair<double, double> getCorner(int i)
        {
                switch (i)
                {
                case 0:
                    return _null;
                case 1:
                    return _eins;    
                case 2:
                    return _zwei;

                default:
                    break; //throw runtime error oder so
                }
        }


        //Aufgabe c)
        void setCorner(std::pair<double, double> set, int i)
        {
            switch (i)
                {
                case 0:
                    _null = set;
                case 1:
                    _eins = set;    
                case 2:
                    _zwei = set;

                default:
                    break; //throw runtime error oder so
                }
        }

        //Aufgabe d)
        Triangle operator+ (Triangle tri)
        {
            std::pair<double, double> CEins = std::make_pair(0, 0);
            std::pair<double, double> CZwei = std::make_pair(0, 0);
            std::pair<double, double> CDrei = std::make_pair(0, 0);

            Triangle TriangleC(CEins, CZwei, CDrei);

            TriangleC._null.first = (_null.first + tri._null.first) * 0.5;
            TriangleC._null.second = (_null.second + tri._null.second) * 0.5;

            TriangleC._eins.first = (_eins.first + tri._eins.first) * 0.5;
            TriangleC._eins.second = (_eins.second + tri._eins.second) * 0.5;

            TriangleC._zwei.first = (_zwei.first + tri._zwei.first) * 0.5;
            TriangleC._zwei.second = (_zwei.second + tri._zwei.second) * 0.5;

            return TriangleC;
        } 

        void printdreieck()
        {
            std::cout << "[" << _null.first << "; " << _null.second << "]" << std::endl;
            std::cout << "[" << _eins.first << "; " << _eins.second << "]" << std::endl;
            std::cout << "[" << _zwei.first << "; " << _zwei.second << "]" << std::endl;
        }
};


#endif