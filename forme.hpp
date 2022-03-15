#ifndef FORME_HPP
#define FORME_HPP

#include "point.hpp"

class forme{
  private :
		point o;

  public :
  	//Constructeur
  	forme();
		forme(point _o);

		//Methodes
		float perimetre() const;
		float surface() const;

		//Accesseurs
		point get_point();

    //Surchage 
		void operator+=(point const &p);
  
  	//Destructeur 
  	~forme();
};

//Surcharge Cout
ostream& operator<<(ostream &s, forme &f);

/*
class carre{
  private:
  float c;
  public:
  
  //Constructeur


	//Methodes


	//Accesseurs

  //Surchage 

  //Destructeur 
  ~carre();
};*/


#endif //FORME_HPP