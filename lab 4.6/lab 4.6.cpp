#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n,i;
	P = 1;
	n = 1;
	while (n <= 10)

	{
		S = 0;
		i = 1;
		while (i <= n)

		{
			S += sin(1. * i) * sin(1. * i);
			i++;

		}
		P *= sqrt(S) / (1 + S);
		n++;

	}
	cout << P << endl;
	P = 1;
	n = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += sin(1. * i) * sin(1. * i);
			i++;
		} while (i <= n);
		P *= sqrt(S) / (1 + S);
		n++;
	} while (n <= 10);
	cout << P << endl;
	P = 1;
	for (n = 1; n <= 10; n++)

	{
		S = 0;
		for (i = 1; i <= n; i++)

		{
			S += sin(1. * i) * sin(1. * i);

		}
		P *= sqrt(S) / (1 + S);

	}
	cout << P << endl;
	P = 1;
	for (n = 10; n >= 1; n--
		)

	{
		S = 0;
		for (i = n; i >= 1; i--
			)

		{
			S += sin(1. * i) * sin(1. * i);
		}
		P *= sqrt(S) / (1 + S);
	}
	cout << P << endl;
	return 0;
}

