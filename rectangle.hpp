#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "cercle.hpp"

class rectangle{
  private:
  float x,y;
  public:
  
  //Constructeur
  rectangle();

	//Methodes
  float perimetre();
	float surface();

	//Accesseurs
	point get_point();

  //Surchage 

  //Destructeur 
  ~rectangle();
};

#endif // RECTANGLE_HPP