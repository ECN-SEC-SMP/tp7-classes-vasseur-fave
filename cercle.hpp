#ifndef CERCLE_HPP
#define CERCLE_HPP

#include <cmath>

#include "forme.hpp"

class cercle{
	private :
		forme f;
		float rayon;

	public : 
		//Constructeurs
		cercle();
		cercle(forme _a, float _r);

		//Methodes
    float perimetre();
		float surface();

		//Accesseurs
		point get_forme();
		float get_rayon();

		//Destructeur
		~cercle();
};

//Surcharge Cout
ostream& operator<<(ostream &s, cercle &c);

#endif // CERCLE_HPP