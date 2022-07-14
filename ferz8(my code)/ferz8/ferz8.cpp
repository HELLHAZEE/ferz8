#include <iostream>
using namespace std;

bool SVert(int arr[8][8], int i, int j)
{
	bool inf = true;
	for (int i = 0; i < 8; i++)
	{
		if (arr[j][i] == 1)
		{
			inf = false;
			return inf;
		}

	}
	return inf;
}

bool SHor(int arr[8][8], int i, int j)
{

	bool inf = true;
	for (int j = 0; j < 8; j++)
	{
		if (arr[i][j] == 1)
		{
			inf = false;
			return inf;
		}
	}
	return inf;
}

bool SDiag(int arr[8][8], int i, int j)
{
	bool d1 = true, d2 = true, inf = true;

	return inf;
}

void Nulification(int arr[8][8])
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			arr[i][j] = 0;
}
