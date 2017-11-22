// cplustest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> //all program is allowed to output data to screen
#include <string>
#include<cuchar>
#include "Calculator.h"
using namespace std;

int main()
{
	Calculator c;
	char op = 'c';
	int x, y;
	while (op != 'e')
	{
		cout << "What operation would you like to perform : add(+), subtract(-),divide(/),multiply(*),[e]xit?";

		cin >> op;

		switch (op) 
		{
			
			case '+':
				cin >> x;
				cin >> y;
				cout << x << "+" << y << "=" << c.add(x,y)<< endl;
				break;
			case '-':
				cin >> x;
				cin >> y;
				cout << x << "-" << y << "=" << c.subtract(x, y) << endl;
				break;
			case '*':
				cin >> x;
				cin >> y;
				cout << x << "*" << y << "=" << c.multiply(x, y) << endl;
				break;
			case '/':
				cin >> x;
				cin >> y;
				cout << x << "/" << y << "=" << c.divide(x, y) << endl;
				break;
			case 'e':
				return 0;
			default:
				cout << "sorry, try again" << endl;

		}
	}

		return 0;
}

