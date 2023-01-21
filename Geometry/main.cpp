#include<iostream>
using namespace std;
//#define DEBUG
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMB
//#define BOARD
#define BOARD_1
//#define HARD_CHESS

void main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите количество звездочек:  "; cin >> n;
#ifdef DEBUG
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{

			cout << "* ";
		}
		cout << endl;
	}
#endif DEBUG
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) 
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < i)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
#endif TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j < n - 1)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;

	}
#endif TRIANGLE_4

#ifdef RHOMB
	int center = n / 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == i + center || j + center == i)
				cout << "\\";
			else
											
				if (j + i == center - 1 || j + i == n - 1 + center)
					cout << "/";
				else
					cout << " ";
			
		}
		cout << endl;
	}
#endif RHOMB
	
#ifdef BOARD
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 1)
				if (j % 2 == 1)
					cout << "* ";
				else
					cout << " ";
			else
				if (j % 2 == 1)
					cout << " ";
		    else
			cout << "* ";
			
		}
		
		cout << endl;
		
	}
#endif BOARD

#ifdef BOARD_1

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			// (i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");

		}
		cout << endl;
	}
#endif BOARD_1


#ifdef HARD_CHESS
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 1)
			{
				if (j % 2 == 1)
				{
					for (int a = 0; a < n; a++)
					{
						for (int a = 0; a < n; a++)
						{
							cout << "*";
						}
						cout << endl;
					}
					
				}
				else
				{
					for (int b = 0; b < n; b++)
					{
						for (int b = 0; b < n; b++)
						{

							cout << "-";
						}
						cout << endl;
					}
				}
			}
			else
			{
				if (j % 2 == 1)
				{
					for (int c = 0; c < 4; c++)
					{
						for (int c = 0; c < 1; c++)
						{

							cout << "-";
						}
						cout << endl;
					}
				}
				else
				{
					for (int d = 0; d < 2; d++)
					{
						for (int d = 0; d < 3; d++)
						{

							cout << "*";
						}
						cout << endl;
					}
				}
			}
			
		}
		
		
	}
	
#endif HARD_CHESS
}