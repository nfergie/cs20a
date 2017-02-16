#include <iostream>
#include <string>
#include <iomanip>
#include "shape.h"
#include "triangle.h"
#include "square.h"
#include "circle.h"

using namespace std;
using namespace assign1;

int main(){
	triangle t(3, 4, 5);
	square s(4);
	rectangle r(3, 2);
	circle c(3);
	ellipse e(3, 3);

	shape *shp[] = { &t, &s, &r, &c, &e};

	for (int i=0; i <5; i++){
		cout << shp[i]->getDescription() <<endl;
		cout << "area = " <<shp[i]->area() <<endl;
		cout << "circumference = " <<shp[i]->circumference()<<endl << endl;
	}
	return 0;
}