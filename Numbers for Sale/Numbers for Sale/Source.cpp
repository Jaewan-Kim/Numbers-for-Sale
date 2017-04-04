#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int sumofdigits(int x)
{
	if (x % 10 == x)
		return x;
	return x % 10 + sumofdigits(x / 10);
}

int numberSale()
{
	int retval=0;
	for (int i = 1; i <= pow(10,15); i++)
	{
		if (sumofdigits(i) == 69)
			retval += i;
	}
	return retval;
}

int main()
{
	cout << numberSale();
}