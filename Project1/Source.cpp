#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "EConsole.h"
#include <windows.h>
using namespace std;

//exc ��� up down
//b���� k�ѽL

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

	


	int i = 1;  //������
	int turn = 0; //��
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
			wcout << "�~��C��";
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
				wcout << "�~��C��";
				gotoxy(44, 10);
				SetColor(0);
				wcout << "���s�}�l";
				gotoxy(44, 14);
				SetColor(0);
				wcout << "�^�D���";
				gotoxy(44, 18);
				SetColor(0);
				wcout << "���}�C��";
				SetColor(0);
				break;
			case 1:
				gotoxy(44, 6);
				SetColor(0);
				wcout << "�~��C��";
				gotoxy(44, 10);
				SetColor(8);
				wcout << "���s�}�l";
				gotoxy(44, 14);
				SetColor(0);
				wcout << "�^�D���";
				gotoxy(44, 18);
				SetColor(0);
				wcout << "���}�C��";
				SetColor(0);
				break;
			case 2:
				gotoxy(44, 6);
				SetColor(0);
				wcout << "�~��C��";
				gotoxy(44, 10);
				SetColor(0);
				wcout << "���s�}�l";
				gotoxy(44, 14);
				SetColor(8);
				wcout << "�^�D���";
				gotoxy(44, 18);
				SetColor(0);
				wcout << "���}�C��";
				SetColor(0);
				break;
			case 3:
				gotoxy(44, 6);
				SetColor(0);
				wcout << "�~��C��";
				gotoxy(44, 10);
				SetColor(0);
				wcout << "���s�}�l";
				gotoxy(44, 14);
				SetColor(0);
				wcout << "�^�D���";
				gotoxy(44, 18);
				SetColor(8);
				wcout << "���}�C��";
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
				cout << "���K����";
				i++;
			}
			else if (b == 'p')
			{
				gotoxy(71, 2 );
				SetColor(0);
				cout << " �{�b���� ";
				if (turn == 0)
				{
					SetColor(1);
					cout << " ����� ";
					turn = 1;
				}
				else if (turn == 1)
				{
					SetColor(4);
					cout << " �¦�� ";
					turn = 0;
				}
				SetColor(0);
				cout << "�U��";
			}
		}
	}
	/*char a;
	int i = 1;  //������
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
			cout << "���K����";
			i++;
		}
	}*/

	/*int i = 1;  //�����
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
			cout << "�{�b���� ����� �U��";
			i++;
		}
	}*/

	/*int i = 1;  //�����
	int m = 0;
	while (1)
	{
		a = _getch();
		if (a == 'a')
		{
			SetColor(8);
			//gotoxy(31 + (i-1) * 4, 2 ); //�
			gotoxy(31,  i * 2); //����
			cout << "�w";
			i++;
		}

	}*/
	
	
}
