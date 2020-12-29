#include "Vector.h"
#include <iostream>
Vector::Vector()
{
	x = 0;
	y = 0;
	//z = 0;
}
Vector::Vector(float a, float b)
{
	x = a;
	y = b;
//	z = c;
}
Vector::Vector(const Vector& a) // конструктор копирования
{
	x = a.x;
	y = a.y;
//	z = a.z;
}
Vector& Vector:: operator = (const Vector& a) // операция присваивания
{
	if (this == &a) // проверка на самоприсваивание
		return *this;
	x = a.x;
	y = a.y;
//	z = a.z;
	return *this;
}
Vector Vector::operator+ (Vector a)
{
	Vector c;
	c.x = x + a.x;
	c.y = y + a.y;
	//c.z = z + a.z;
	return c;
}
Vector Vector::operator- (Vector a)
{
	Vector c;
	c.x = x - a.x;
	c.y = y - a.y;
//	c.z = z - a.z;
	return c;
}
Vector Vector::operator* ( float b)
{
	Vector c;
	c.x = x * b;
	c.y = y * b;
//	c.z = z * b;
	return c;
}
void Vector::print()
{
	cout << "(" << x << " , " << y  << ")" << endl;
}


void  get_coordinates(Vector f,float& a, float& b) { //, float& c) {
	a = f.x;
	b = f.y;
//	c = f.z;
}
float skal(Vector a, Vector b)
{
	return a.x * b.x + a.y * b.y; // +a.z * b.z;
}
//Vector vect(Vector a, Vector b)
//{
//	Vector c;
//	c.x = a.y * b.z - a.z * b.y;
//	c.y = a.x * b.z - a.z * b.y;
//	c.z = a.x * b.y - a.y * b.x;
//	return c;
//}