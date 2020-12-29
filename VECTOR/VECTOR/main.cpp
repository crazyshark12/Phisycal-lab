#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector a(3, 2), b(1, 2);
	Vector c;
	c = a + b;
	c.print();
	return 0;
}