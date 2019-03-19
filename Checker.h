#include <iostream>
#include <vector>
#pragma once

using namespace std;

class Checker
{
  private:
	int xpositon, ypositon, queen;

  public:
	Checker()
	{
		xpositon = 0;
		ypositon = 0;
		queen = 0;
	}
	Checker(int one, int two) : xpositon(one), ypositon(two) {}

	void getX();
	void getY();
	void getQueen();
	void setQueen();
	void move();
};