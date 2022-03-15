#ifndef CERCLE_HPP
#define CERCLE_HPP

#include <cmath>

#include "forme.hpp"

class cercle : public forme {
	private :
		float rayon;

	public : 
		//Constructeurs
		cercle();
		cercle(point _p, float _r);

		//Methodes
    float perimetre();
		float surface();

		//Accesseurs
		float get_rayon();

		//Destructeur
		~cercle();
};

//Surcharge Cout
ostream& operator<<(ostream &s, cercle &c);

#endif // CERCLE_HPP