#include "cercle.hpp"
#define pi 3.14

//Constructeurs
cercle::cercle() : forme(){ 
	this->rayon = 1;
}

cercle::cercle(point _p, float _r) : forme(_p){
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
float cercle::get_rayon() {return rayon;}

//Surcharge cout
ostream& operator<<(ostream &s, cercle &c){
	point r = c.get_point();
  s << r << ", r = " << c.get_rayon() << ", P = " << c.perimetre() << ", S = " << c.surface();
	return s;
}

//Destructeur
cercle::~cercle(){
}