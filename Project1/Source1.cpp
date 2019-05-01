#include <conio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

char readChar(char key);
void loadMap(string fileName);
void showMap(int top);

int turn = 0; //回合
int top=-1;
vector<vector<int>> undo;

int main()
{
	char temp;
	while (temp = _getch()) {
		if (temp == 'a')
		{
			loadMap("Check.txt"); //refresh screen
			showMap(top);
		}
		else if(temp =='b')
		{
			loadMap("Initial.txt"); 
			showMap(top);
		}
		else if (temp == 'u')
		{
			top--;
			showMap(top);
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

void loadMap(string fileName)
{
	fstream fin;
	fin.open(fileName);
	vector<int> temp;
	int tempInt;
	int j = 0;
	do {
		fin >> tempInt;
		temp.push_back(tempInt);
	} while (!fin.eof());

	undo.push_back(temp);
	top++;

}

void showMap(int top)
{
	for (int i = 1; i < 91; i++)
	{
		if (i % 9 == 0) cout << endl;
		cout<<undo[top][i]<<" ";
	}
}


/*void loadmap2()
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
}*/