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
	/*int i = 1;  //������
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

			//gotoxy(31 + (i-1) * 4, 2 ); //�
			gotoxy(31,  i * 2); //����
			cout << "�w";
			i++;
		}

	}*/
	
	
}


void UI()
{
	cout << "�Y�ááááááááááááááááááá�" << endl; //top
	cout << "�Y�Y�ááááþ�  �p  ��  �ܡááááááW" << endl;
	for (int i = 1; i <= 3; i++)
	{
		if (a[i-1][0] == -1) {
			cout << "�Y�Y                                    �W" << endl;
		}
		else
		{

			cout << "�Y�Y    " << i << ".";
			for (int j = 0; j < 5; j++)
			{
				cout << a[i-1][j];
			}
			cout<< "                         �W" << endl;
		}
	}
	cout << "�Y�Y�ááááááááááááááááááW" << endl;
}