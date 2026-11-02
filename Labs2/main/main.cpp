#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(65001);

	cout << "\n-------------------- Лабораторна робота --------------------\n\n";

	float a, b, x, inner, y;

	cout << "Введіть значення x:\n";
	cout << "x = ";
	cin >> x;

	cout << "Введіть значення a:\n";
	cout << "a = ";
	cin >> a;

	cout << "Введіть значення b:\n";
	cout << "b = ";
	cin >> b;

	// Обчислення проміжної змінної згідно з блок-схемою[span_2](start_span)[span_2](end_span)
	inner = pow(a, 3) + pow(x, 3);

	// Перевірка умови згідно з блок-схемою (8.2 <= inner <= 100)[span_3](start_span)[span_3](end_span)
	if (inner >= 8.2 && inner <= 100)
	{
		// Обчислення функції y за формулою з блок-схеми[span_4](start_span)[span_4](end_span)
		// log() у C++ відповідає натуральному логарифму ln()
		// cbrt() обчислює кубічний корінь
		y = pow(log(inner), 2) / (sqrt(inner) + cbrt(b));

		cout << "\nРезультат обчислення:\n\ty = " << y << endl;
		cout << "--------------------------------------------------------\n";
	}
	else
	{
		cout << "\nВиходить за межі області допустимих значень\n";
		cout << "--------------------------------------------------------\n";
	}

	// Затримка консолі перед закриттям
	system("pause");
	return 0;
}