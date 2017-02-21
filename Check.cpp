#include<iostream>
#include"vector.h"
int main()
{
	int n;
	std::cout << "Write n: ";
	std::cin >> n;
	int* mass1 = new int[n];
	std::cout << "Mass 1: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Write punkt " << i + 1 << ": ";
		std::cin >> mass1[i];
	}
	Vector a(mass1, n);
	std::cout << "Mass 2: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Write punkt " << i + 1 << ": ";
		std::cin >> mass1[i];
	}
	Vector b(mass1, n);
	std::cout << "Mass 1: " << std::endl ;
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << std::endl;
	}
	std::cout << "Mass 2: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << b[i] << std::endl;
	}
	std::cout << "After a ^ b: " << std::endl;
	a = b;
	std::cout << "Mass a: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << std::endl;
	}
}