#include <vector>
#include <iostream>
#include <algorithm>
#include <time.h> 
#include "Figure.h"

using namespace std;

int main()
{
	vector<Figure*> fig;
	srand(time(NULL));

	int chooseFig = false;
	for (int i = 0; i < 10; i++) {
		chooseFig = rand() % 2;
		if (chooseFig == 1)
			fig.push_back(new Circle(rand() % 10));
		else
			fig.push_back(new Ellipse(rand() % 10, rand() % 10));
	}

	for (int i = 0; i < fig.size() - 1; i++) {
		for (int j = i + 1; j < fig.size(); j++) {
			if (fig[i]->area() > fig[j]->area())
			{
				Figure* temp = fig[i];
				fig[i] = fig[j];
				fig[j] = temp;
			}
		}
	}


	double sumArea = 0;
	for (int i = 0; i < 10; i++)
		sumArea += fig[i]->area();

	cout << "Summary area of all figures: " << sumArea; 
	return 0;
}