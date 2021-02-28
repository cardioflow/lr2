#include <iostream>
using namespace std;
bool isInArea(double x, double y)
{
	double krug = sqrt(pow(x, 2) + pow(y, 2));
	if ((krug <= 1 && x >= 0 && y <= 0) || (x <= 1 && x >= 0) && (y <= 1 && y >= 0))
		return 1;
	else
		return 0;
}
void main()
{
	double x, y;
	cout << "Enter x y\n";
	cin >> x >> y;
	if (isInArea(x, y) == 0) cout << "0";
	else cout << "1";
}
