#include <iostream>
using namespace std;
void task1(), task2();
void main()
{
    int g;
    cout << "Select task\n1task [1]\n2task [2]\n";
    cin >> g;
    switch (g)
    {
    case 1: return task1();
    case 2: return task2();
    }
}