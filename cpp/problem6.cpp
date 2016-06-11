#include <iostream>
using namespace std;

int main()
{
	__int64 sumofsquares = 0;
	__int64 squareofsums = 0;

	for (int i = 1; i <= 100; i++)
	{
		sumofsquares += i*i;
		squareofsums += i;
	}

	squareofsums = squareofsums * squareofsums;

	__int64 difference = squareofsums - sumofsquares;

	cout << difference << endl;
}