#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file("data.txt");

	if (!file)
	{
		cerr << "Could not open data.txt" << endl;
		exit(1);
	}

	int numbers[20][20];

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
			file >> numbers[i][j];

	}

	__int64 max = 0;
	__int64 prod = 0;

	int i = 0;
	int j = 0;

	for (i = 0; i <= 16; i++)
	{
		for (j = 0; j <= 16; j++)
		{
			prod = numbers[i][j] * numbers[i + 1][j] * numbers[i + 2][j] * numbers[i + 3][j];
			if (prod > max)
				max = prod;

			prod = numbers[i][j] * numbers[i][j + 1] * numbers[i][j + 2] * numbers[i][j + 3];
			if (prod > max)
				max = prod;

			prod = numbers[i][j] * numbers[i + 1][j + 1] * numbers[i + 2][j + 2] * numbers[i + 3][j + 3];
			if (prod > max)
				max = prod;
		}
	}

	for (i = 17; i < 20; i++)
	{
		for (j = 0; j <= 16; j++)
		{
			prod = numbers[i][j] * numbers[i][j + 1] * numbers[i][j + 2] * numbers[i][j + 3];
			if (prod > max)
				max = prod;

			prod = numbers[j][i] * numbers[j + 1][i] * numbers[j + 2][i] * numbers[j + 3][i];
			if (prod > max)
				max = prod;
		}
	}

	for (i = 3; i < 20; i++)
	{
		for (j = 0; j <= 16; j++)
		{
			prod = numbers[i][j] * numbers[i-1][j + 1] * numbers[i-2][j + 2] * numbers[i-3][j + 3];
			if (prod > max)
				max = prod;
		}
	}

	cout << max << endl;

	return 0;
}