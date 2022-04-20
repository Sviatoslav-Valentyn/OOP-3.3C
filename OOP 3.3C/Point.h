#pragma once
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;

class Point : public Object
{
	double x, y;
public:
	Point(); // конструктор за умовчанням
	Point(double, double); // конструктор ініціалізації
	Point(const Point&); //копіювання
	~Point();

	double Angle();
	double Origin();

	friend bool operator== (const Point& s1, const Point& s2);
	friend bool operator!= (const Point& s1, const Point& s2);

	Point& operator = (const Point&); // присвоєння
	friend istream& operator >> (istream&, Point&); //введення з клавіатури
	friend ostream& operator << (ostream&, const Point&); //вивід на екран
	operator string() const; //приведення типу – перетворення у літерний рядок

	Point& operator ++(); // префіксний інкремент
	Point operator ++(int); // постфіксний інкремент
	Point& operator --(); // префіксний декремент
	Point operator --(int); // постфіксний декремент
};