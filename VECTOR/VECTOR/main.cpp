#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector a(3, 2, 1), b(1, 2, 3);
	Vector c;
	c = a + b;
	c.print();
	return 0;
}