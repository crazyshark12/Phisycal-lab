#include <iostream>

using namespace std;
class Vector
{
public:
	float x,y,z;
	Vector ()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}
	Vector(const Vector& a) // конструктор копирования
	{
		x = a.x;
		y = a.y;
		z = a.z;
	}
	Vector& operator = (const Vector& a) // операция присваивания
	{
		if (this == &a) // проверка на самоприсваивание
			return *this;
		x = a.x;
		y = a.y;
		z = a.z;
		return *this;
	}
	~Vector()
	{
	}
	void print()
	{
		cout << "(" << x << " , " << y << " , " << z << ")" << endl;
	}

};
Vector operator+ (Vector a, Vector b)
{
	Vector c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}
Vector operator- (Vector a, Vector b)
{
	Vector c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return c;
}
Vector operator* (Vector a, float b)
{
	Vector c;
	c.x = a.x*b;
	c.y = a.y * b;
	c.z = a.z * b;
	return c;
}
float skal(Vector a, Vector b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}
Vector vect(Vector a, Vector b)
{
	Vector c;
	c.x = a.y * b.z - a.z * b.y;
	c.y = a.x * b.z - a.z * b.y;
	c.z = a.x * b.y - a.y * b.x;
	return c;
}