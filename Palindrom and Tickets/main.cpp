#include<iostream>
using namespace std;
//#define PALINDROM
//#define TICKETS

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROM
	int number;
	int reverse = 0;
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
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
#endif // PALINDROM

#ifdef TICKETS
	int number, part1, part2;
	cout << "Введите число: "; cin >> number;
	part1 = number / 1000;
	part2 = number % 1000;
	if (part1 / 100 + (part1 / 10) % 10 + part1 % 10 == part2 / 100 + (part2 / 10) % 10 + part2 % 10)
	{
		cout << "Счастливый билет" << endl;
	}
	else
	{
		cout << "Обычный билет" << endl;
	}
#endif // TICKETS

}