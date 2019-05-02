#include <conio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <Windows.h>
#include <time.h>

using namespace std;

char readChar(char key);
void loadMap(string fileName); //讀黨輸入
void showMap(int top); //畫圖(回合還沒拆開)

int turn = 0; //回合
int top=-1; //紀錄當前的狀態
vector<vector<int>> undo;

/*int main()
{
	char temp;
	while (temp = _getch()) {
		system("cls");

		if (temp == 'a')
		{
			system("cls");
			loadMap("Check.txt"); 
			showMap(top);

		}
		else if (temp == 'b')
		{
			system("cls");
			loadMap("Initial.txt");
			showMap(top);
		}
		else if (temp == 'u') //undo
		{
			system("cls");
			if (top == 0)
			{
				undo.pop_back();
				cout << "you don't have any record" << endl;
				top--;
			}
			else if (top < 0)
			{
				cout << "you don't have any record" << endl;
			}
			else
			{
				top--;
				undo.pop_back();
				showMap(top);
			}
		}

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

