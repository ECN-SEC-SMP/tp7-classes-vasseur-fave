#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "forme.hpp"

class rectangle : public forme {
  private:
  	float L,l;

  public:
  	//Constructeur
  	rectangle();
  	rectangle(point _p, float _L, float _l);

		//Methodes
  	float perimetre();
		float surface();

		//Accesseurs
		float get_l();
  	float get_L();

  	//Destructeur 
  	~rectangle();
};

//Surcharge
ostream& operator<<(ostream &s, rectangle &r);

#endif // RECTANGLE_HPP