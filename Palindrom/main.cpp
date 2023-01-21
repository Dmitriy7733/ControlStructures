#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Palindrome" << endl;
	int number; //число, введенное с клавиатуры
	int reverse = 0; // число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int copy = number; //копируем значение  number, чтобы введенное пользователем число осталось не изменным
	//а в процессе деления будем изменять  copy
	while (copy)
	{
		reverse *= 10; //освобождаем место для следующего младшего разряда
		reverse += copy % 10; //сохраняем младший разряд исходного числа
		copy /= 10; // убираем младший разряд из исходного числа

	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
}
