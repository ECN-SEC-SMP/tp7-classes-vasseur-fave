#ifndef CARRE_HPP
#define CARRE_HPP

#include "rectangle.hpp"

class carre : public rectangle{
  private:
  float c;

  public:  
  	//Constructeur
		carre();
		carre(point _p, float _c);

		//Accesseurs
		float get_c();

  	//Destructeur 
  	~carre();
};

//Surcharge
ostream& operator<<(ostream &s, carre &c);

#endif // CARRE_HPP