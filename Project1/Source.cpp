#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;

int a[3][5];
void UI();
int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int b;
			cin >> b;
			a[i][j] = b;
		}
	}



	UI();
	system("pause");
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