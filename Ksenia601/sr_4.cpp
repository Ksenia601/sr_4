#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double y, x; //змінні
	cout << "Введiть значеня x= ";
	cin >> x;
	y = (2 * x + sin(x)) / ((pow(cos(x), 2) + x * x) + (pow(0.5, x)) / (sqrt(x)));
	<< "y= " < y << endl;
	
	return 0;
}