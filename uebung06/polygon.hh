#include "point.hh"

#include <vector>
#include <algorithm>

#pragma once

class Polygon
{
    private:
        std::vector<Point> _Eckpunkte;
    
    public:

        Polygon(const std::vector<Point>& corners)
                :   _Eckpunkte(corners)
        {}
        
        Polygon(const std::vector<double>& x,const std::vector<double>& y)
        {
            //Eine Liste mit x-Coordinaten, eine mit y-Coordinaten,
            //also Punkt mit x[i] und y[i] machen
            //Ich gehe davon aus, das x u y gleich lang sind:
            for(std::vector<double>::size_type i = 0; i < x.size(); i++)
            {
                _Eckpunkte.push_back(Point(x[i], y[i]));
            }
        }


        std::vector<Point> getEckp() const
        {
            return _Eckpunkte;
        }

        std::size_t corners() const
        {
            std::size_t groesse = _Eckpunkte.size();
            return groesse;
        }

        const Point& corner(std::size_t i) const
        {
            return _Eckpunkte[i];
        }

        double area() const
        {
            /*
            1.: Schreibe die Koordinaten der Eckpunkte auf: A(1, 1), B(3, 4), C(6, 5), D(4, 2).     //Punkte existieren im Vector _Eckpunkte
            2.: Füge die Koordinaten von A am Ende der Liste hinzu: A(1, 1), B(3, 4), C(6, 5), D(4, 2), A(1, 1).    //Neuen Vector anlegen der nur während der Flächenberechnung existiert, und _Eckpunkte[0] dranhängen
            3.: Multipliziere die x-Koordinaten der Eckpunkte, die nebeneinander liegen, paarweise miteinander und addiere die Produkte: (1 x 4) + (3 x 6) + (6 x 4) + (4 x 1) = 41.
            4.: Multipliziere die y-Koordinaten der Eckpunkte, die nebeneinander liegen, paarweise miteinander und addiere die Produkte: (1 x 3) + (4 x 5) + (5 x 2) + (2 x 1) = 29.
            5.: Ziehe das Ergebnis aus Schritt 3 von dem Ergebnis aus Schritt 4 ab: 29 - 41 = -12.
            6.: Teile das Ergebnis aus Schritt 5 durch 2, um die Fläche des Polygons zu erhalten: |-12| / 2 = 6.
            */

            double area = 0;
            std::vector<Point> flaeche = _Eckpunkte;    //1.
            flaeche.push_back(_Eckpunkte[0]);           //2.
            double xmul = 0;
            double xsum = 0;
            double ymul = 0;
            double ysum = 0;

            for (const auto& a : flaeche)         //3.&4.
            { 
                int Zaehler = 0;
                xmul = flaeche[Zaehler].getx() * flaeche[Zaehler + 1].getx(); 
                xsum += xmul;
                ymul = flaeche[Zaehler].gety() * flaeche[Zaehler + 1].gety(); 
                ysum += ymul;
                Zaehler++;
            }
            
            area = 0.5 * (ysum - xsum); //5. & 6.

            if (area < 0)   //Betrag bilden, falls nötig
            {
                area = area * (-1);
            }
            

            return area;
        }

        void setEckp(std::vector<Point>& Eckpkt)
        {
            _Eckpunkte = Eckpkt;
        }

        void addEckp(const Point& p)
        {
            _Eckpunkte.push_back(p);
        }

    };