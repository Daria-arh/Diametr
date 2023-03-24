#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int nX, int nY) : x{ nX }, y{ nY } {}

	Point() :Point{ 0,0 } {}

	void ViewPoint() { cout << x << '\n ' << y << endl; }

	void setX(int nX) { x = nX; }
	int getX() { return x; }

	void setY(int nY) { y = nY; }
	int getY() { return y; }
	
	static Point add(const Point& p1, const Point& p2) { return Point((p1.x - p2.x), (p1.y - p2.y)); }

	friend double operator/(const Point& p1, const Point& p2)
	{
		return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	}

	friend double operator+(const Point& p1, const Point& p2)
	{
		return (p1 / p2) / 2;
	}

};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));

	Point point1(24, 38);
	Point point2(12, 7);
	cout << point1 + point2;
}