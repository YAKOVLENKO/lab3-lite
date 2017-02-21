#include<iostream>

class Vector
{
	int * vect;
	int n;
public:
	Vector();
	Vector(int *mass, int k);
	~Vector();
	int operator[](size_t index) const;
	Vector operator =(Vector mass);
	Vector operator ^(Vector mass);
	int getLen();
};
