#include "carre.hpp"
#include <cmath>

//Constructeurs
carre::carre() : rectangle(){
  this->c = 1;
}

carre::carre(point _p, float _c) : rectangle(_p,_c,_c){
  this->c = _c;
}

//Accesseurs
float carre::get_c() {return c;}

//Surcharge Cout
ostream& operator<<(ostream &s, carre &c){
	point r = c.get_point();
	s << "centre : " << r << ", c : " << c.get_c() << ", P = " << c.perimetre() << ", S = " << c.surface();
	return s;
}

//Destructeur
carre::~carre(){
}


