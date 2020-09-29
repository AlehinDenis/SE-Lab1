#include <iostream>
#include <vector>
#include <stdlib.h>    
#include <time.h> 
#include <algorithm>
#include "Ellipse.h"
#include "Circle.h"

using namespace std;

int main()
{
	vector<Circle> v;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		v.push_back(Circle(rand() % 10));

	sort(v.begin(), v.end());


	double sumArea = 0;
	for (int i = 0; i < 10; i++)
		sumArea += v[i].getArea();

	cout << sumArea;
	return 0;
}