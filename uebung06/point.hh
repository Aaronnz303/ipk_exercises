#pragma once

class Point
{
    private:
    double _x, _y;

    public:
        Point()
        {
            _x = 0;
            _y = 0;
        }

        Point(const double& x,const double& y)
            : _x(x), _y(y)          //Hier mal Constructor Initializer List, ums gemacht zu haben
        { }

        //Copy-Konstruktor:
        Point(const Point& other)
        {
            this->_x = other._x;
            this->_y = other._y;
        }

        //Get- u Set-Methoden
        double getx() const
        {
            return _x;
        }

        void setx(double& thisx)
        {
            _x = thisx;
        }   

        double gety() const
        {
            return _y;
        }

        void sety(double& thisy)
        {   
            _y = thisy;
        }
        //G&s-Methoden ende
};