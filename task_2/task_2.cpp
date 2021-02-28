#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}
void main()
{
	double x;
	cout << "x= ";
	cin >> x;
	cout << f(x);
}
