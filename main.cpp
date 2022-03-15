#include "point.hpp"

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

int main() {
	/*test_creerPoint();
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

	test_TranslateWithParameters();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

	test_TranslateWithPoint();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	
	test_SurchargeCout();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';*/
}