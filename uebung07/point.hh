#include <array>
#include <iostream>
#include <>
#pragma once

/*typedef codebezeichnung aliasname*/

template <typename Coord, int dim>
class Point
{
    private:
    Coord _x;
    Coord _y;
    //int dim = dimension der Koordinate
    static const int _dim = dim;
    std::array<Coord, _dim> Koordinate; //Array der Größe dim mit Datentyp Coord

    //Pint<double, 3> a;
    public:
        Point()
        {
            for(int i =0; i < dim; i++)
            {
                Koordinate[i] = 0;
            }
        }

        Point(Coord& x, Coord& y)
            : _dim(dim)       //Hier mal Constructor Initializer List, ums gemacht zu haben
        {
            Koordinate[0] = x;
            Koordinate[1] = y;
        }

        //Copy-Konstruktor:
        Point(const Point& other)
        {
            this->_x = other._x;
            this->_y = other._y;
        }
        
        //Get- u Set-Methoden
        Coord getx() const
        {
            return _x;
        }

        void setx(double& thisx)
        {
            _x = thisx;
        }  

        Coord gety() const
        {
            return _y;
        }

        void sety(double& thisy)
        {   
            _y = thisy;
        }

        int getdim() const
        {
            return _dim;
        }

        void setdim(int& thisdim)
        {
            _dim = thisdim; //sollte nicht funktionieren, falls dim schon gesetzt ist 
        }
        //G&s-Methoden Ende

};