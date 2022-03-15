#include "cercle.hpp"
#define pi 3.14

//Constructeurs
cercle::cercle(){
	forme a;
  this->f = a;
	this->rayon = 1;
}

cercle::cercle(forme _a, float _r){
  this->f = _a;
	this->rayon = _r;
}

// Methodes
float cercle::perimetre()
{
  return 2*pi*(this->rayon);
}

float cercle::surface()
{
  return pi*((float)pow((this->rayon),2));
}

//Accesseurs
point cercle::get_forme() {return f.get_point();}
float cercle::get_rayon() {return rayon;}

//Surcharge cout
ostream& operator<<(ostream &s, cercle &c){
	point r = c.get_forme();
  s << r << ", r = " << c.get_rayon() << ", P = " << c.perimetre() << ", S = " << c.surface();
	return s;
}

//Destructeur
cercle::~cercle(){
}