#include <iostream>
#pragma once
using namespace std;

class point{
  private : 
    float x,y;

  public : 
		//Constructeurs
		point();
		point(float _x,float _y);
		point(const point& other);

		//Methodes
		void translate(point p);
    void translate(float trans_x, float trans_y);

		//Accesseurs
    float get_x(); 
    float get_y();

		//Mutateurs
		void set_x(float _x);
		void set_y(float _y);

		//Surcharge
		void operator+=(point const &p);

		//Destructeur
    ~point();
};

ostream& operator<<(ostream &s, point &p);