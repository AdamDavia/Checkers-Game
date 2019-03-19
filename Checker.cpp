#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>
#include "Checker.h"

using namespace std;

void Checker::getX()
{
	cout << xpositon << endl;
}
void Checker::getY()
{
	cout << ypositon << endl;
}
void Checker::getQueen()
{
	cout << queen << endl;
}
void Checker::setQueen()
{
	cout << "Please enter the value of the queen." << endl;
	cin >> queen;
	while (queen != 1 || queen != 2)
	{
		cout << "Please enter a valid response." << endl;
		cin >> queen;
	}
}
void Checker::move()
{
	int move = 0;
	while (move != 4)
	{
		cout << "Please enter 0-3 to move your piece. Enter in a 4 to exit the program." << endl;
		cin >> move;
		while (move != 0 && move != 1 && move != 2 && move != 3 && move != 4)
		{
			cout << "Please enter a valid value." << endl;
			cin >> move;
		}
		if (move == 0)
		{
			if (xpositon == 7 || ypositon == 0)
			{
				cout << "1" << endl;
			}
			else
			{
				xpositon = xpositon + 1;
				ypositon = ypositon - 1;
			}
		}
		if (move == 1)
		{
			if (xpositon == 0 || ypositon == 0)
			{
				cout << "1" << endl;
			}
			else
			{

				cout << "0" << endl;
				xpositon = xpositon - 1;
				ypositon = ypositon - 1;
			}
		}
		if (move == 2)
		{
			if (xpositon == 7 || ypositon == 7)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
				xpositon = xpositon + 1;
				ypositon = ypositon + 1;
			}
		}
		if (move == 3)
		{
			if (xpositon == 0 || ypositon == 7)
			{
				cout << "1" << endl;
			}
			else
			{
				xpositon = xpositon - 1;
				ypositon = ypositon + 1;
			}
		}
	}
}