#include "point.hpp"

//Constructeurs
point::point(){
  this->x = 0;
  this->y = 0;
}

point::point(float _x,float _y){
  this->x = _x;
  this->y = _y;
}

point::point(const point& other) : x(other.x), y(other.y){
}

//Methodes
void point::translate(float trans_x, float trans_y)
{
  this->x += trans_x;
  this->y += trans_y;
}

/*void point::translate(point p)
{
	this->x += p.x;
	this->y += p.y;
}*/
void point::translate(point p)
{
	 *this += p;
}

//Accesseurs
float point::get_x() {return x;} 
float point::get_y() {return y;}

//Mutateurs
void point::set_x(float _x) {this->x = _x;}
void point::set_y(float _y) {this->y = _y;}

//Destructeurs
point::~point(){
}

//Surcharge cout
ostream& operator<<(ostream &s, point &p){
	s << "x = "<< p.get_x() << " et y = " << p.get_y();
	return s;
}

//Surcharge +=
void point::operator+=(point const &p){
	x += p.x;
	y += p.y;
}