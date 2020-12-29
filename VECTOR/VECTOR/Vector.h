#pragma once

using namespace std;
class Vector
{
	float x, y;
	//float x, y, z;
public:
	Vector();
	Vector(float a, float b);
	Vector(const Vector& a); // конструктор копирования
	Vector& operator = (const Vector& a); // операция присваивания
	Vector operator+ (Vector a);
	Vector operator- (Vector a);
	Vector operator* (float b);
	void print();
	friend void get_coordinates(Vector f,float& a, float& b);
	friend float skal(Vector a, Vector b);
//	friend Vector vect(Vector a, Vector b);
};

