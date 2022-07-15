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

void Show(int arr[8][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void Ferzification(int arr[8][8])
{
	int counter = 0;
	while (counter < 8)
	{
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				if (SVert(arr, i, j) && (SHor(arr, i, j)) && (SDiag(arr, i, j)))
				{
					arr[i][j] = 1;
					counter++;
				}
	}
	cout << "Ferzificated board: " << endl;
	Show(arr);
}

int board[8][8]; // Доска; 1 - ферзь

int chk(int c, int r)  // Проверка, что можно ставить в клетку [r][c] 
{                      // проверка - только слева!
	for (int i = 0; i < c; ++i)
	{
		// Проверка горизонтали
		if (board[i][r]) return 0;
		// Проверка диагонали
		if (r - c + i >= 0) if (board[i][r - c + i]) return 0;
		if (r + c - i < 8) if (board[i][r + c - i]) return 0;
	}
	return 1;
}

// Сама рекурсивная функция
int vert(int i) // Установка i-й вертикали
{
	if (i == 8) return 1;  
	for (int j = 0; j < 8; ++j)  // Ищем место по ввертикали
		if (chk(i, j))           // Если можно - 
		{
			board[i][j] = 1;    // ставим
			if (vert(i + 1)) return 1; // получилось!
			board[i][j] = 0;    // не получилось - убираем ферзя
		}
	return 0;
}

int main(int argc, char * argv[])
{
	
}
