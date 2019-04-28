#include <conio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

char readChar(char key);
void loadmap();
void loadmap2();
void loadmap3(int*a);

int top=-1;
vector<int[10][9]> undo;

int main()
{
	char temp;
	while (temp = _getch()) {
		if (temp == 'a')
		{
			loadmap(); //refresh screen
		}
		else if(temp =='b')
		{
			loadmap2();
		}
		else if (temp == 'u')
		{
			top--;
			loadmap3(undo[top]);
		}
		else
		{
			system("cls");
		}
	}

}
/*char readChar(char key)
{

	if (key == 'a')
	{
		cout << "this is a" << endl;
		return 0;
	}
	else
	{
		cout << "other else";
		return false;
	}
}*/

void loadmap()
{
	fstream fin;
	fin.open("Check.txt");
	int a[10][9];
	int j = 0;
	do { //少了最後一行
		for (int i = 0; i < 9; i++)
		{
			fin >> a[j][i];
			cout << a << " ";
		}
		cout << endl;
		j++;
	} while (!fin.eof());

	undo.push_back(a);
	top++;

}


void loadmap2()
{
	fstream fin;
	fin.open("Initial.txt");
	int a[10][9];
	int j = 0;
	do { //少了最後一行
		for (int i = 0; i < 9; i++)
		{
			fin >> a[j][i];
			cout << a << " ";
		}
		cout << endl;
		j++;
	} while (!fin.eof());

	undo.push_back(a);
	top++;

}

void loadmap3(int*a)
{
	for (int j = 0; j < 10; j++) 
	{
		for (int i = 0; i < 9; i++)
		{
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
}