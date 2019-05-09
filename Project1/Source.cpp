#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "EConsole.h"
using namespace std;

int a[3][5];
void UI();
int main()
{
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int b;
			cin >> b;
			a[i][j] = b;
		}
	}*/

	char title[6] ="chess";


	_SetConsoleTitle(title);
	_GetConsoleTitle(title, 6);

	wfstream UI;
	wstring sy;
	UI.open("UI.txt");
	while (getline(UI,sy))
	{
		cout.width(2);
		wcout<< sy << endl;
	}

	system("pause");
	char a;
	/*int i = 1;  //紀錄欄
	int m = 0;
	while (1)
	{
		a = _getch();
		if (a == 'a')
		{
			if (i > 1)
			{
				m = 1;
			}
			gotoxy(4 + m, 2 + i);
			cout << i << ":";
			cout << "炮八平五";
			i++;
		}
	}*/

	/*int i = 1;  //顯示欄
	int m = 0;
	while (1)
	{
		a = _getch();
		if (a == 'a')
		{
			if (i > 1)
			{
				m = 1;
			}
			gotoxy(70 + m, 2 + i);
			cout << "現在輪到 紅色方 下棋";
			i++;
		}
	}*/

	/*int i = 1;  //顯示欄
	int m = 0;
	while (1)
	{
		a = _getch();
		if (a == 'a')
		{

			//gotoxy(31 + (i-1) * 4, 2 ); //橫的
			gotoxy(31,  i * 2); //直的
			cout << "安";
			i++;
		}

	}*/
	
	
}


void UI()
{
	cout << "︳￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣" << endl; //top
	cout << "︳︳￣￣￣￣￣戰  況  顯  示￣￣￣￣￣￣︱" << endl;
	for (int i = 1; i <= 3; i++)
	{
		if (a[i-1][0] == -1) {
			cout << "︳︳                                    ︱" << endl;
		}
		else
		{

			cout << "︳︳    " << i << ".";
			for (int j = 0; j < 5; j++)
			{
				cout << a[i-1][j];
			}
			cout<< "                         ︱" << endl;
		}
	}
	cout << "︳︳￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣︱" << endl;
}