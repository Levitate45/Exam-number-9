#include "vector.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

vector::vector(int n)
{
	nrel = n;
	arr = new double[nrel];
	for (int i = 0; i < nrel; i++)
		arr[i] = 0;
}

vector::vector(const vector& t)
{
	nrel = t.nrel;
	arr = new double[nrel];
	for (int i = 0; i < nrel; i++)
		arr[i] = t.arr[i];
}

vector::~vector()
{
	delete[]arr;
}

void vector::read()
{
	for (int i = 0; i < nrel; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
}

void vector::print()const
{
	cout << endl;
	for (int i = 0; i < nrel; i++)
		cout << "arr[" << i << "]=" << arr[i] << endl;
}
vector& vector::operator=(const vector& v)
{
	if (this != &v)
	{
		if (nrel != v.nrel)
		{
			nrel = v.nrel;
			delete[] arr;
			arr = new double[nrel];
		}
		for (int i = 0; i < nrel; i++)
			arr[i] = v.arr[i];
	}
	return *this;
}

vector operator-(const vector& v1, const vector& v2)
{
	int i;
	if (v1.nrel > v2.nrel)
	{
		vector v(v1);
		for (i = 0; i < v2.nrel; i++)
			v.arr[i] = v.arr[i] - v2.arr[i];
		return v;
	}
	else
	{
		vector v(v2);
		for (i = 0; i < v1.nrel; i++)
			v.arr[i] = v.arr[i] - v1.arr[i];
		return v;
	}
}
vector operator&(const vector& v1, const vector& v2)
{
	int i;
	if (v1.nrel > v2.nrel)
	{
		vector v(v1);
		for (i = 0; i < v2.nrel; i++)
			v.arr[i] = v.arr[i] + v2.arr[i];
		return v;
	}
	else
	{
		vector v(v2);
		for (i = 0; i < v1.nrel; i++)
			v.arr[i] = v.arr[i] + v1.arr[i];
		return v;
	}
}
