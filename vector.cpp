#include"vector.h"
Vector::Vector()
{
	delete[] vect;
	vect = new int;
	vect = 0;
	n = 0;
}
int Vector::getLen()
{
	return n;
}
Vector::Vector(int *mass, int k)
{
	delete[] vect;
	n = k;
	vect = new int[n]; 
	for (int i = 0; i < n; i++)
	{
		vect[i] = mass[i];
	}
	
}
Vector::~Vector()
{
	if (n) { delete[] vect; }
	n = 0;
}
int Vector::operator[](size_t index) const
{
	return vect[index];
}

Vector Vector::operator =(Vector mass)
{
	delete[] vect;
	vect = new int[mass.getLen()];
	for (int i = 0; i < mass.getLen(); i++)
	{
		vect[i] = mass[i];
	}
	return *this;
}
Vector Vector::operator ^(Vector mass)
{
	
	int * tmp1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		tmp1[i] = mass[i] ^ vect[i];
	}
	Vector tmp(tmp1, n);
	return tmp;
}
