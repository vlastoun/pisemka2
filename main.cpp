/*	Program, který byl jako písemka
*	Je klolonie bunek a zjistete pozici a velikost nejdelsiho retezce zivych bunek
*	v kazdem radku kolonie.
*/

#include <iostream>

using namespace std;

const int N = 10;

const bool Colony[N][N] = {
	{true,false,false,true,true,true,true,false,true,true},
	{true,false,false,true,true,false,true,true,true,true},
	{false,false,true,true,true,false,true,true,true,true},
	{true,false,false,true,true,true,true,false,true,true},
	{true,false,false,true,true,false,true,true,true,true},
	{false,false,true,true,true,false,true,true,true,true},
	{false,false,true,true,true,false,true,true,true,true},
	{true,false,false,true,true,true,true,false,true,true},
	{true,true,true,true,true,false,true,true,true,true},
	{true,true,true,true,true,true,true,false,true,true}
};

void Ukol(const bool arr[N][N]) {
	for (int i = 0; i < N; i++)
	{
		int pozice = 0;
		int maxdelka = 0;
		int temp = 0;
		for (int j = 0; j < N;)
		{
			int citac = 0;
			while (arr[i][j] == true && j < N) {
				citac++;
				j++;
			}
			temp = citac;
			citac = 0;
			if (temp > maxdelka) {
				maxdelka = temp;
				pozice = j-maxdelka;
			}
			j++;
		}
		cout << pozice << " " << maxdelka << endl;
	}
}



void PrintColony(const bool arr[N][N]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j])
			{
				cout << "X";
			}
			else
			{
				cout << "_";
			}
		}
		cout << endl;
	}
}

int main() {
	PrintColony(Colony);
	Ukol(Colony);
	
	int vstup;
	cin >> vstup;
	return 0;
}