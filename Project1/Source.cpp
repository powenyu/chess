#include <conio.h>
#include <iostream>
using namespace std;

void readChar(char key);

/*int main()
{
	char temp;
	while (temp = _getch()) {
		readChar(temp);
	}

}*/

void readChar(char key)
{
	
	if (key == 'a')
	{
		cout << "this is a" << endl;
	}
	else
	{
		cout << "other else";
	}
}