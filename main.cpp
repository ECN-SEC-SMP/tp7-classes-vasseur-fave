#include "point.hpp"
#include "forme.hpp"
#include "cercle.hpp"
#include "rectangle.hpp"

void test_creerPoint()
{
  std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
  point p1;
	point p2(10,15);
	cout << "x1 = "<< p1.get_x() << " et y1 = " << p1.get_y() << endl;
	cout << "x2 = "<< p2.get_x() << " et y2 = " << p2.get_y() << endl;
}

void test_TranslateWithParameters()
{
  std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
  point p1;
	cout << "x = "<< p1.get_x() << " et y = " << p1.get_y() << endl;
	p1.translate(5,5);
	cout << "x_new = "<< p1.get_x() << " et y_new = " << p1.get_y() << endl;
}

void test_TranslateWithPoint()
{
  std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
  point p1(5,5);
	point p2(10,15);
	cout << "x1 = "<< p1.get_x() << " et y1 = " << p1.get_y() << endl;
	cout << "x2 = "<< p2.get_x() << " et y2 = " << p2.get_y() << endl;
	p2.translate(p1);
	cout << "x2_new = "<< p2.get_x() << " et y2_new = " << p2.get_y() << endl;
}

void test_SurchargeCout()
{
	std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
	point p1(10,15);
	cout << p1 << endl;
}

void test_FormeAbstraite()
{
	std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
	point p1(10,15);
	forme f1;
	forme f2(p1);
	point r1 = f1.get_point();
	point r2 = f2.get_point();
	cout << r1 << endl;
	cout << r2 << endl;
}

void test_FormeTranslate()
{
	std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';	
  point p(10,15);
  forme f;
  point r1 = f.get_point();
  f += p;
  point r2 = f.get_point();
  cout << r1 << endl;
	cout << r2 << endl;
}

void test_FormeSurchargeCout()
{
	std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
	point p(10,15);
	forme f(p);
	cout << f << endl;
}

void test_Cercle()
{
  std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
  point p(10,10);
  forme f(p);
  cercle c(f,1);
	point r = c.get_forme();
  cout << r << " et " << c.get_rayon() << endl;
	cout << " s = " << c.perimetre() << endl;
  cout << " s = " << c.surface() << endl;
}

void test_CercleSurchargeCout()
{
  std::cout << " ~~~~~~" << __func__ << "~~~~~~" << '\n';
  point p(10,10);
  forme f(p);
  cercle c(f,1);
	cout << c << endl;
}

int main() {
	/*test_creerPoint();
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

	test_TranslateWithParameters();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

	test_TranslateWithPoint();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	
	test_SurchargeCout();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

  // Partie 3 
  test_FormeAbstraite();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

  test_FormeTranslate();
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

	test_FormeSurchargeCout();
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

  test_Cercle();
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

	test_CercleSurchargeCout();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';*/
}