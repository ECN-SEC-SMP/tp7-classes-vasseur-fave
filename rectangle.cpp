#include "rectangle.hpp"

//Constructeurs
rectangle::rectangle() : forme(){
  this->L = 1;
  this->l = 1;
}

rectangle::rectangle(point _p, float _L, float _l) : forme(_p){
  this->L = _L;
  this->l = _l;
}

//Accesseurs
float rectangle::get_l() {return l;}
float rectangle::get_L() {return L;}

//Surcharge Cout
ostream& operator<<(ostream &s, rectangle &r){
	point c = r.get_point();
	s << "centre : " << c << ", L : " << r.get_L() << ", l : " << r.get_l() << ", P = " << r.perimetre() << ", S = " << r.surface();
	return s;
}

// Methodes 
float rectangle::perimetre(){
  return ((this->l)+(this->L))*2;
}

float rectangle::surface(){
  return (this->l)*(this->L);
}

//Destructeur
rectangle::~rectangle(){
}
