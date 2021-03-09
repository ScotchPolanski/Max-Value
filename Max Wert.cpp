#include <iostream>

using namespace std;

void maxwert(int x, int y, int& erg)
{
	erg = x;
	if (y > x)
	{
		erg = y;
	}
}

int main()
{
	int a = 5;
	int b = 9;
	int maxi;
	maxwert(a, b, maxi);

	cout << "Der Maximalwert von den Zahlen " << a << " und " << b << " ist " << maxi;
	cout << "\n";
}