#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	double b;
	cout << "Введите первое число " << endl; //Вводится первое число 
	cin >> a;
	cout << "Введите второе число " << endl; // Вводится второе число 
	cin >> b;
	cout << "Сумма чисел: " << a + b << endl; // Выводит сумму чисел 
	cout << "Разность чисел:  " << a - b << endl; // Выводит разность чисел
	cout << "Среднее арифметическое этих чисел по модулю: " << ((abs(a) + abs(b)) / 2.0) << endl; // Выводит среднее арифметическое по модулю
	cout << "Произведение чисел: " << a * b << endl; // Выводит произведение чисел  
	cout << "Частное чисел: " << a / b << endl; // Выводит частное чисел	
	return 0;
}
