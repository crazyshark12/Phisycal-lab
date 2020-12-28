#pragma once

using namespace std;
class Vector
{
public:
	float x, y, z;
	Vector();
	Vector(float a, float b, float c);
	Vector(const Vector& a); // ����������� �����������
	Vector& operator = (const Vector& a); // �������� ������������
	~Vector();
	void print();
};
Vector operator+ (Vector a, Vector b);
Vector operator- (Vector a, Vector b);
Vector operator* (Vector a, float b);
float skal(Vector a, Vector b);
Vector vect(Vector a, Vector b);
