#pragma once
class vector
{
	int nrel;
	double* arr;
public:
	vector(int = 10);
	vector(const vector&);
	~vector();
	void read();
	void print()const;
	vector& operator=(const vector&);
	friend vector operator - (const vector&, const vector&);
	friend vector operator & (const vector&, const vector&);
};