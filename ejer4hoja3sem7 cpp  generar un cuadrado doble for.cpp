#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;



int ingresenumero()
{
	int num;

	cout << "ingrese numero: ";
	cin >> num;
	while ( num
	<= 0 || num > 20)
	{

		cout << "ingrese numero : ";
		cin >> num;
	}return num;
}
void grafica(int num)
{

	for (int i = 1; i <= num; i++)
	{

		for (int j = 1; j <= num; j++)
			if (j == 1 || i == num||i==1||j==num)
				cout << "*";
			else cout << " ";
		cout << endl;
	}
}

int main()
{
int m = ingresenumero();
grafica(m);
_getch();
}

