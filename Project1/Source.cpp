#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "EConsole.h"
#include <windows.h>
using namespace std;

//exc 選單 up down
//b紀錄 k棋盤

int state = 1; //mainUI option
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
	wfstream option;
	wstring op;
	UI.open("UI.txt");
	while (getline(UI,sy))
	{
		cout.width(2);
		wcout<< sy << endl;
	}
	UI.close();

	


	int i = 1;  //紀錄欄
	int turn = 0; //紅
	int m = 0;
	int opt = 0;
	char b;
	while (b = _getch())
	{
		if (b == 27)
		{
			if (state == 2)
			{
				Clr();
				state = 1;
				UI.open("UI.txt");
				while (getline(UI, sy))
				{
					cout.width(2);
					wcout << sy << endl;
				}
				UI.close();
			}
			else if (state == 1)
			{
				state = 2; //option state
				opt = 0;
				int j = 1;
				option.open("option.txt");
				while (getline(option, op))
				{
					cout.width(2);
					gotoxy(40, 3 + j);
					wcout << op << endl;
					j++;
				}
				option.close();
			}
		}
		if (state == 2)
		{
			gotoxy(44, 6);
			SetColor(8);
			wcout << "繼續遊戲";
			if (b == 72) //key up code
			{
				if (opt != 0 && opt <= 3)
				{
					opt--;
				}
			}
			else if (b == 80) //key down code
			{
				if (opt != 3 && opt >= 0)
				{
					opt++;
				}
			}
			switch (opt)
			{
			case 0:
				gotoxy(44, 6);
				SetColor(8);
				wcout << "繼續遊戲";
				gotoxy(44, 10);
				SetColor(0);
				wcout << "重新開始";
				gotoxy(44, 14);
				SetColor(0);
				wcout << "回主選單";
				gotoxy(44, 18);
				SetColor(0);
				wcout << "離開遊戲";
				SetColor(0);
				break;
			case 1:
				gotoxy(44, 6);
				SetColor(0);
				wcout << "繼續遊戲";
				gotoxy(44, 10);
				SetColor(8);
				wcout << "重新開始";
				gotoxy(44, 14);
				SetColor(0);
				wcout << "回主選單";
				gotoxy(44, 18);
				SetColor(0);
				wcout << "離開遊戲";
				SetColor(0);
				break;
			case 2:
				gotoxy(44, 6);
				SetColor(0);
				wcout << "繼續遊戲";
				gotoxy(44, 10);
				SetColor(0);
				wcout << "重新開始";
				gotoxy(44, 14);
				SetColor(8);
				wcout << "回主選單";
				gotoxy(44, 18);
				SetColor(0);
				wcout << "離開遊戲";
				SetColor(0);
				break;
			case 3:
				gotoxy(44, 6);
				SetColor(0);
				wcout << "繼續遊戲";
				gotoxy(44, 10);
				SetColor(0);
				wcout << "重新開始";
				gotoxy(44, 14);
				SetColor(0);
				wcout << "回主選單";
				gotoxy(44, 18);
				SetColor(8);
				wcout << "離開遊戲";
				SetColor(0);
				break;
			default:
				break;
			}
		}
		else if (state == 1)
		{
			if (b == 'k')
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
			else if (b == 'p')
			{
				gotoxy(71, 2 );
				SetColor(0);
				cout << " 現在輪到 ";
				if (turn == 0)
				{
					SetColor(1);
					cout << " 紅色方 ";
					turn = 1;
				}
				else if (turn == 1)
				{
					SetColor(4);
					cout << " 黑色方 ";
					turn = 0;
				}
				SetColor(0);
				cout << "下棋";
			}
		}
	}
	/*char a;
	int i = 1;  //紀錄欄
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
			SetColor(8);
			//gotoxy(31 + (i-1) * 4, 2 ); //橫的
			gotoxy(31,  i * 2); //直的
			cout << "安";
			i++;
		}

	}*/
	
	
}
