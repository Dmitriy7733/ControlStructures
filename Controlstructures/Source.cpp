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
	
	cout << "������� ����������� �������: "; cin >> temperature;
	
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	
	else if (temperature > 35)
	{
		cout << "����� �����" << endl;
	}
	
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	
	else if (temperature > 5)
	{
		cout << "���������" << endl;
	}
	else if (temperature > 0)
	{
		cout << "�������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	
	else if (temperature > -70)
	{
		cout << "������� �����" << endl;
	}
	
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif

#ifdef WHILE2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
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