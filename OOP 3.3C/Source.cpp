#include "Point.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Object.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1, 1);
	Point b(1, 1);
	cout << a++ << endl;
	cout << a-- << endl;
	cout << ++a << endl;
	cout << --a << endl;

	Point x;
	cout << "Input point  " << endl;
	cin >> x;
	cout << " Полярні координати: " << x.Angle() << endl;
	cout << " Відстань до початку координат: " << x.Origin() << endl;
	Point y;
	cout << "Input point  " << endl;
	cin >> y;
	cout << " Полярні координати: " << y.Angle() << endl;
	cout << " Відстань до початку координат: " << y.Origin() << endl;

	if (x == y)
	{
		cout << "Два обєкти є рівні\n";
	}
	if (x != y)
	{
		cout << "Два обєкти не є рівні\n";
	}
	cout << "Object count: " << x.get_count() << endl;
	return 0;

	cin.get();
	return 0;
}