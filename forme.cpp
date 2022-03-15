#include "forme.hpp"

//Constructeurs
forme::forme(){
	point p;
  this->o = p;
}

forme::forme(point _o){
  this->o = _o;
}

//Accesseur
point forme::get_point() {return o;}

//Surcharge += avec un point
void forme::operator+=(point const &p){
	o.translate(p);
}

//Surcharge cout
ostream& operator<<(ostream &s, forme &f){
	point p = f.get_point();
	s << p;
	return s;
}

//Destructeur
forme::~forme(){
}
