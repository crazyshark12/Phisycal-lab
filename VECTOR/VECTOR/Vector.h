#pragma once

using namespace std;
class Vector
{
	float x, y, z;
public:
	Vector();
	Vector(float a, float b, float c);
	Vector(const Vector& a); // конструктор копирования
	Vector& operator = (const Vector& a); // операция присваивания
	Vector operator+ (Vector a);
	Vector operator- (Vector a);
	Vector operator* (float b);
	void print();
	friend void get_coordinates(Vector f,float& a, float& b, float& c);
	friend float skal(Vector a, Vector b);
	friend Vector vect(Vector a, Vector b);
};

