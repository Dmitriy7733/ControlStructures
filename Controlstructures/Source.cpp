#include<iostream>
#include<conio.h>

using namespace std;
//#define WHILE1
//#define WHILE2
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE1
	int temperature;
	
	cout << "Введите температуру воздуха: "; cin >> temperature;
	
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	
	else if (temperature > 5)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	
	else if (temperature > -70)
	{
		cout << "Сильный мороз" << endl;
	}
	
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif

#ifdef WHILE2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key !=27);
}