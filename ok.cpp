#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	double b;
	cout << "Введите первое число " << endl;
	cin >> a;
	cout << "Введите второе число " << endl;
	cin >> b;
	cout << "Сумма чисел: " << a + b << endl;
	cout << "Разность чисел:  " << a - b << endl;
	cout << "Среднее арифметическое этих чисел по модулю: " << ((abs(a) + abs(b)) / 2.0) << endl;
	cout << "Произведение чисел: " << a * b << endl;
	cout << "Частное чисел: " << a / b << endl;
	return 0;
}
