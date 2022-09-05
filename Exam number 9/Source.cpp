#include <iostream>
#include "vector.h"
#include <math.h>
#include <iomanip>
#include <fstream>

using namespace std;
int main()
{
	cout << "== working with vectors ==" << endl;
	vector t1(3), t2(3), t3;
	cout << "Array t1" << endl;
	t1.read();
	t1.print();
	cin.get();
	cout << endl;
	cout << "Array t2" << endl;
	t2.read();
	t2.print();
	cin.get();
	cout << endl;
	cout << "Array t3" << endl;
	t3 = t1 - t2;
	t3.print();
	cout << "Intersection of t1 and t2";
	vector t4 = t1 & t2;
	t4.print();

}